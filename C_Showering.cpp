#include<bits/stdc++.h>
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
cin>>t;
cin.ignore();
while(t--)
{
  int n,s,m;
  cin>>n>>s>>m;
  vector<vector<int>> interval(n,vector<int>(2));
  for (int i=0;i<n;i++) {
  cin>>interval[i][0]>>interval[i][1];
  }
  string ans = "NO";
  int start = 0,end=interval[0][0];
  if(end-start>=s)
  {
    cout<<"YES"<<el;
    continue;
  }
  else if(m-interval[n-1][1]>=s)
  {
    cout<<"YES"<<el;
    continue;
  }
  for(int i=1;i<=n-1;i++)
  {
    if(interval[i][0]-interval[i-1][1]>=s)
    {
      ans = "YES";
      break;
    }
  }
  cout<<ans<<el;
}
return 0;
}