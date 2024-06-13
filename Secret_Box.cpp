#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

ll find_max_locations(ll x, ll y, ll z, ll k) {
    ll max_positions = 0;

    // Iterate over all possible values of i
    for (ll i = 1; i * i * i <= k; ++i) {
        if (k % i == 0) {
            ll k1 = k / i;
            // Iterate over all possible values of j
            for (ll j = i; j * j <= k1; ++j) {
                if (k1 % j == 0) {
                    ll l = k1 / j;
                    if (i <= x && j <= y && l <= z) {
                        max_positions = max(max_positions, (x - i + 1) * (y - j + 1) * (z - l + 1));
                    }
                    if (j <= x && i <= y && l <= z) {
                        max_positions = max(max_positions, (x - j + 1) * (y - i + 1) * (z - l + 1));
                    }
                    if (i <= x && l <= y && j <= z) {
                        max_positions = max(max_positions, (x - i + 1) * (y - l + 1) * (z - j + 1));
                    }
                    if (l <= x && j <= y && i <= z) {
                        max_positions = max(max_positions, (x - l + 1) * (y - j + 1) * (z - i + 1));
                    }
                    if (j <= x && l <= y && i <= z) {
                        max_positions = max(max_positions, (x - j + 1) * (y - l + 1) * (z - i + 1));
                    }
                    if (l <= x && i <= y && j <= z) {
                        max_positions = max(max_positions, (x - l + 1) * (y - i + 1) * (z - j + 1));
                    }
                }
            }
        }
    }

    return max_positions;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, z, k;
        cin >> x >> y >> z >> k;

        ll result = find_max_locations(x, y, z, k);

        cout << result << endl;
    }

    return 0;
}








