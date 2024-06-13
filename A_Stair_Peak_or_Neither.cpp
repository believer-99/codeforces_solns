#include<bits/stdc++.h>
using namespace std;

#define el endl

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a<b && b<c)
  {
    cout<<"STAIR"<<el;
  }
  else if(a<b && b>c)
  {
    cout<<"PEAK"<<el;
  }
  else{
    cout<<"NONE"<<el;
  }
}
return 0;
}