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
  string a,b;
  cin>>a>>b;
  swap(a[0],b[0]);
  cout<<a<<" "<<b<<el;
}
return 0;
}