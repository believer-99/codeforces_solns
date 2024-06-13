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
  int x;
  cin>>x;
  int gcd=0;
  int max=0;
  int ans;
  for (int i=1,sum=0;i<x;i++) {
  gcd=__gcd(x,i);
  sum=(gcd + i);
  if(sum>=max)
  {
    max=(sum);
    ans=i;
  }
  }
  cout<<ans<<el;
}
return 0;
}