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
  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> vis(n+1);
  vis[0]=0;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  string ans = "YES";
  for (int j=0;j<n;j++) {
    if(j>0)
    {
      if((a[j]>1 && vis[a[j]-1]==0) && (a[j]<n && vis[a[j]+1]==0))
      {
        ans="NO";
      break;
      }
      else if((a[j]==1 && vis[2]==0) || (a[j]==n && vis[n-1]==0))
      {
        ans="NO";
      break;
      }
    }
  vis[a[j]]=1;
  }
  cout<<ans<<el;
}
return 0;
}