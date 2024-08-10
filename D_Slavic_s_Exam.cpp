#include<bits/stdc++.h>
#include<cctype>
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
  string s,t;
  cin>>s>>t;
  int ns=s.size(),nt=t.size();
  int i=0,j=0;
  while(i<ns && j<nt)
  {
    if(s[i]==t[j])
    {
      j++;
    }
    else if(s[i]=='?')
    {
      s[i]=t[j];
      j++;
    }
    i++;
  }
  for(int i=0;i<ns;i++)
  {
    if(s[i]=='?')s[i]='a';
  }
  if(j==nt)
  {
    cout<<"YES"<<el;
    cout<<s<<el;
  }
  else cout<<"NO"<<el;
}
return 0;
}