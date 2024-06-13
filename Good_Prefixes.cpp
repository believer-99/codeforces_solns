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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sum = 0;
        int count = 0;
        int max_element = INT_MIN;

        for (int i = 0; i < n; ++i) {
            sum += a[i];
            if (a[i] > max_element) {
                max_element = a[i];
            }
            if (sum == 2 * max_element) {
                count++;
            }
        }

        cout << count << el;
    }

    return 0;
}
