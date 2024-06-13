#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = INT32_MAX; // Initialize the answer with maximum possible value
        ll maxx; // Variable to store the maximum value in each pair of adjacent elements
        for (int j = 0; j < n - 1; j++) {
            maxx = max(a[j], a[j + 1]); // Find the maximum value in the current pair of adjacent elements
            ans = min(ans, maxx); // Update the answer with the minimum of the current maximum value and the previous answer
        }
        cout << (ans - 1) << el; // Output the answer minus one
    }
    return 0;
}

