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
  int n;
  cin>>n;
  string s;
  cin>>s;
  s[0]='(';
  if(n==2)
  {
    cout<<"1"<<el;
    continue;
  }
  int cost = 0;
  for (int i=2;i<n-1;i+=2) {
  if(s[i-1]=='(')
  {
    s[i]=')';
  }
  else s[i]='(';
  }
  for (int i=0;i<n;i++) {
  if(s[i]=='(')cost-=i;
  else cost+=i;
  }
  cout<<cost<<el;
}
return 0;
}   
