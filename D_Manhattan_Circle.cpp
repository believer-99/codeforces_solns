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
        vector<vector<char>> grid(n, vector<char>(m));

        int vf = INT_MAX, vl = INT_MIN, hf = INT_MAX, hl = INT_MIN;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                if (grid[i][j] == '#') {
                    vf = min(vf, i);
                    hf = min(hf, j);
                    vl = max(vl, i);
                    hl = max(hl, j);
                }
            }
        }

        int cv = (vf + vl) / 2;
        int ch = (hf + hl) / 2;
        cout << cv + 1 << " " << ch + 1 << el; // +1 to convert 0-based index to 1-based index
    }

    return 0;
}
