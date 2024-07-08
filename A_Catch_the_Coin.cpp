#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> coins(n);

    for (int i = 0; i < n; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }

    for (int i = 0; i < n; ++i) {
        int x = coins[i].first;
        int y = coins[i].second;

        if(y<-1)cout<<"NO"<<el;
        else cout<<"YES"<<el;
    }

    return 0;
}
