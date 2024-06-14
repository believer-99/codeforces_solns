#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; ++i) {
        cout << 7 << ' ';
    }
    cout << 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
