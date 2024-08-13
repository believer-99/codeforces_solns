#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
      cin >> p[i];
    }
    vector<int> ans(n);
    for (int j=0;j<n;j++) {
    if(p[j]==n)ans[j]=1;
    else ans[j]=p[j]+1;
    }
    for (int i=0;i<n;i++) {
    cout<<ans[i]<<" ";
    }
    cout<<el;
  }
  return 0;
}
