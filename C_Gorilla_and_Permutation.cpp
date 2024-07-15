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
  int n,m,k;
  cin>>n>>m>>k;
  int rem=-1;
  for (int i=n;i>=0;i--) {
  if(i>=k || i>m)cout<<i<<" ";
  else 
  {
    rem=i;
    break;
  }
  }
  for (int i=0;i<rem;i++) {
  cout<<(i+1)<<" ";
  }
  cout<<el;
}
return 0;
}