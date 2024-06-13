#include<bits/stdc++.h>
using namespace std;

#define el endl

bool checkBinary(int n)
{
  while(n>=1)
  {
    if(n%10!=1 || n%10!=0)
    {
      return false;
      break;
    }
    n=n/10;
  }
  return true;
}


int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n;
  cin>>n;
  while(n>=1)
  {
    if(checkBinary(n))
    {
      cout<<"YES"<<el;
      break;
    }
    else{
      if(n%11==0)
      {
        n=n/11;
      }
      else if(n%10==0)
      {
        n=n/10;
      }
      else if(n%101==0)
      {
        n=n/101;
      }
      cout<<"NO"<<el;
    }
  }
}
return 0;
}