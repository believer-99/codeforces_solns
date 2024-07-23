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
  if(k==0)
  {
    cout<<"0"<<el;
    continue;
  }
  if(k<=n)
  {
    cout<<"1"<<el;
    continue;
  }
  int rem = (k-n);
  int count=1,ind = n-1,indCount=0;
  while(rem>0)
  {
    if(indCount<=1)
    {
    rem-=ind;
    count++;
    indCount++;
    }
    else 
    {
      ind--;
      indCount=0;
    }
  }
  cout<<min(count,(n*n))<<el;
}
return 0;
}