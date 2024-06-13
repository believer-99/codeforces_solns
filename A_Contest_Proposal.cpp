#include <bits/stdc++.h>
#define rep(x, y, z) for(int x = (y); x <= (z); ++x)
#define per(x, y, z) for(int x = (y); x >= (z); --x)
#define endl '\n'
using namespace std;
typedef long long ll;
 
const int N = 105;
 
int T, n, a[N], b[N];
 
int main() {
    ios::sync_with_stdio(false); // Speeds up I/O operations
    cin.tie(0); cout.tie(0); // Unties cin and cout for performance
    for(cin >> T; T; --T) { // Loop through test cases
        cin >> n; // Input size of the arrays
        rep(i, 1, n) cin >> a[i]; // Input elements of array a
        rep(i, 1, n) cin >> b[i]; // Input elements of array b
        int diff = 0, ans = 0; // Variables to track differences and answer
        rep(i, 1, n) {
            // If the i-th element of array a minus the accumulated difference is greater than the i-th element of array b
            if(a[i - diff] > b[i]) {
                ++ans; // Increment answer
                ++diff; // Increment difference
            }
        }
        cout << ans << endl; // Output the answer for the current test case
    }
    return 0; // Exit
}
