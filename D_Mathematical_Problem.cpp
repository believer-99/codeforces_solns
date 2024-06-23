#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

// Function to evaluate an operation
long long eval(long long a, long long b, char op) {
    if (op == '+') return a + b;
    if (op == '×') return a * b;
    return LLONG_MAX;
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        vector<vector<long long>> minDP(n, vector<long long>(n, LLONG_MAX));
        vector<vector<long long>> maxDP(n, vector<long long>(n, LLONG_MIN));
        
        // Initialize the DP tables for single digits
        for (int i = 0; i < n; ++i) {
            minDP[i][i] = maxDP[i][i] = s[i] - '0';
        }
        
        // Fill the DP tables
        for (int length = 2; length <= n; ++length) {
            for (int i = 0; i <= n - length; ++i) {
                int j = i + length - 1;
                for (int k = i; k < j; ++k) {
                    for (char op : {'+', 'x'}) {
                        long long minVal1 = eval(minDP[i][k], minDP[k+1][j], op);
                        long long minVal2 = eval(minDP[i][k], maxDP[k+1][j], op);
                        long long minVal3 = eval(maxDP[i][k], minDP[k+1][j], op);
                        long long minVal4 = eval(maxDP[i][k], maxDP[k+1][j], op);
                        
                        long long maxVal1 = eval(minDP[i][k], minDP[k+1][j], op);
                        long long maxVal2 = eval(minDP[i][k], maxDP[k+1][j], op);
                        long long maxVal3 = eval(maxDP[i][k], minDP[k+1][j], op);
                        long long maxVal4 = eval(maxDP[i][k], maxDP[k+1][j], op);
                        
                        minDP[i][j] = min(minDP[i][j], minVal1);
                        minDP[i][j] = min(minDP[i][j], minVal2);
                        minDP[i][j] = min(minDP[i][j], minVal3);
                        minDP[i][j] = min(minDP[i][j], minVal4);
                        
                        maxDP[i][j] = max(maxDP[i][j], maxVal1);
                        maxDP[i][j] = max(maxDP[i][j], maxVal2);
                        maxDP[i][j] = max(maxDP[i][j], maxVal3);
                        maxDP[i][j] = max(maxDP[i][j], maxVal4);
                    }
                }
            }
        }
        
        // The result is the minimum value for the entire string
        cout << minDP[0][n-1] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}



