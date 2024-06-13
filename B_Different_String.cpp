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
  string s;
  cin>>s;
  int flag=0;
  for (int i=0;i<s.length();i++) {
  if(s[0]!=s[i])
  {
    swap(s[i],s[0]);
    flag=1;
  }
  }
  if(flag==0) cout<<"NO"<<el;
  else{
    cout<<"YES"<<el;
    cout<<s<<el;
  }
}
return 0;
}