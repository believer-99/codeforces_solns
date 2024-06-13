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
  int n;
  cin>>n;
  cin.ignore();
  string s;
  getline(cin,s);
  int count=0;
  for (int i=0;i<n;i++) {
    count+=(s[i]=='@');
    if(s[i]=='*' && s[i-1]=='*')
    {
      break;
    }
  }
  cout<<count<<el;
}
return 0;
}