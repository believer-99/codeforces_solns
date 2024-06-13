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
  cout<<min(x,y)<<" "<<max(x,y)<<el;
}
return 0;
}