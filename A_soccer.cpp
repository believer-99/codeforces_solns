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
  ll x1,y1;
  cin>>x1>>y1;
  ll x2,y2;
  cin>>x2>>y2;
   if((x2>y2 && y1>x1)|| (y2>x2 && x1>y1))
  {
    cout<<"NO"<<el;
  }
  else 
  {
    cout<<"YES"<<el;
  }

}
return 0;
}