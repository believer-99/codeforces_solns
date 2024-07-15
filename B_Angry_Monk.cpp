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
  int n,k;
  cin>>n>>k;
  vector<int> a(k);
  for (int i=0;i<k;i++) {
  cin>>a[i];
  }
  ll ones = 0;
  ll ops =0;
  bool flag=false;
  ll maxx = *max_element(a.begin(),a.end()); 
  for (int j=0;j<k;j++) {
    if(a[j]==maxx && !flag)
  {
    flag = true;
    continue;
  }
  else if(a[j]==1)ones++;
  else
  {
    ops +=(a[j]-1);
    ones +=a[j];
  }
  }
  cout<<(ops+ones)<<el;
}
return 0;
}