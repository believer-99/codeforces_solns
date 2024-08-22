#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int a;
  cin>>a;
  if((a>=102 && a<=109) || (a>=1010 && a<=1099) )cout<<"YES"<<el;
  else cout<<"NO"<<el;
}
return 0;
}