#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n,f,k;
  cin>>n>>f>>k;
  int a[n];
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  int fav=a[f-1];
  sort(a,a+n,greater<int>());
  vector<int> indices;
  for (int j=0;j<n;j++) {
  if(a[j]==fav)indices.push_back(j);
  }
  int count=0;
  int len=indices.size();
  for(auto index:indices)
  {
    if((index+1)<=(k))count++;
  }
  if(count==0)cout<<"NO"<<el;
  else if(count==len)cout<<"YES"<<el;
  else cout<<"MAYBE"<<el;
}
return 0;
}