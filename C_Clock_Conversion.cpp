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
  string s;
  getline(cin,s);
  string add=" AM";
  int hh = (s[0]-'0')*10 + s[1]-'0';
  if (hh>=12)
  {
    add=" PM";
    hh-=12;
  }
  if(hh==0)
  {
    hh=12;
  }
  s[0]=(hh)/10;
  s[0]+='0';
  s[1]=(hh)%10;
  s[1]+='0';
  cout<<(s+add)<<el;
}
return 0;
}