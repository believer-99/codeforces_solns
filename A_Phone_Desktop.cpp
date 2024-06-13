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
  int x,y;
  cin>>x>>y;
  int screens=0;
  if(y%2==0)
  {
    screens=y/2;
    if(x>7*(y/2))
    {
      int rem=x-7*(y/2);
      screens+=(int)ceil(rem/15.0);
    }
  }
  else{
    screens=(y+1)/2;
    if(x>(7*(y+1)/2)+4)
    {
      int rem=x-((7*(y+1)/2)+4);
      screens+=(int)ceil(rem/15.0);
    }
  }
  cout<<screens<<el;
}
return 0;
}