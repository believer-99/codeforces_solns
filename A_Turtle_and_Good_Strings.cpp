#include<bits/stdc++.h>
using namespace std;

#define el "\n"
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
  if(s[0]==s[n-1])
  {
    cout<<"NO"<<el;
  }
  else cout<<"YES"<<el;
}
return 0;
}