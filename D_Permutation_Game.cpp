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
  ll n,k,pb,ps;
  cin>>n>>k>>pb>>ps;
  ll a[n],p[n];
  int kk=k;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  for (int j=0;j<n;j++) {
  cin>>p[j];
  }
  ll bsum=0,ssum=0;
  while(k--)
  {
    bsum+=a[pb-1];
    if(a[pb-1]<=p[pb-1])
    {
      pb=p[pb-1];
    }
  }
  while(kk--)
  {
    ssum+=a[ps-1];
    if(a[ps-1]<=p[ps-1])
    {
      ps=p[ps-1];
    }
  }
  if(bsum>ssum) cout<<"Bodya"<<el;
  else if(ssum>bsum) cout<<"Sasha"<<el;
  else cout<<"Draw"<<el;
}
return 0;
}