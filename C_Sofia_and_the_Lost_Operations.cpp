#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        unordered_set<int> bb(b.begin(), b.end());
        
        int m;
        cin >> m;
        vector<int> d(m);
        
        for (int i = 0; i < m; ++i) {
            cin >> d[i];
        }
        
        unordered_set<int> dd(d.begin(), d.end());
        string ans = "YES";
        
        if (bb.find(d[m - 1]) == bb.end()) {
            ans = "NO";
        }
        
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                if (dd.find(b[i]) == dd.end())
                {
                    ans = "NO";
                    break;
                }
                else
                {
                    dd.erase(b[i]);
                }
            }
        }
        
        cout << ans << el;
    }
    return 0;
}







