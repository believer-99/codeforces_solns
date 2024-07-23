#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        ll maxx = 0,current = 0;
        int i = 0;
        
        for (int j = 0; j < n; j++) {
            current +=a[j];
            
            while (i <= j && ((a[j] - a[i])>1 || current>m)) {
                current-= a[i];
                i++;
            }
            maxx = max(maxx, current);
        }
        cout<<maxx<<el;
    }
    
    return 0;
}
