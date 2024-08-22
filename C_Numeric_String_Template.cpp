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
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  int m;
  cin>>m;
  vector<string> s(m);
  for (int j=0;j<m;j++) {
  cin>>s[j];
  }
  int minn=*min_element(a.begin(),a.end());
  for (int i=0;i<m;i++) {
  int size = s[i].length();
  unordered_map<char,ll> sd;
  unordered_map<ll,char> ds;
  string ans = "YES";
  if(n!=size)
  {
    cout<<"NO"<<el;
    continue;
  }
  string temp = s[i];
  for (int j=0;j<size;j++) {
  if(sd.find(temp[j]) == sd.end())sd[temp[j]]=a[j]+abs(minn);
  else
  {
    if(sd[temp[j]]!=(a[j]+abs(minn)))
    {
      ans = "NO";
      break;
    }
  }
  if(ds.find(a[j]+abs(minn))==ds.end())ds[a[j]+abs(minn)]=temp[j];
  else{
    if(ds[a[j]+abs(minn)]!=temp[j])
    {
      ans="NO";
      break;
    }
  }
  }
  cout<<ans<<el;
  }
}
return 0;
}