#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        vector<vector<int>> result = matrix;  // To store the updated matrix values
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int maxx = 0;
                if (i > 0) {
                    maxx = max(maxx, matrix[i - 1][j]);
                }
                if (i < n - 1) {
                    maxx = max(maxx, matrix[i + 1][j]);
                }
                if (j > 0) {
                    maxx = max(maxx, matrix[i][j - 1]);
                }
                if (j < m - 1) {
                    maxx = max(maxx, matrix[i][j + 1]);
                }
                if (matrix[i][j] > maxx) {
                    result[i][j] = maxx;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << result[i][j] << " ";
            }
            cout << el;
        }
    }
    return 0;
}
