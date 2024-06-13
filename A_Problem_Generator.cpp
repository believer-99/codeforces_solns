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
  int n,m;
  cin>>n>>m;
  cin.ignore();
  string s;
  cin>>s;
  unordered_map<char,int> hash={
    {'A',0},
    {'B',0},
    {'C',0},
    {'D',0},
    {'E',0},
    {'F',0},
    {'G',0},
  };
  for (int i=0;i<n;i++) {
    hash[s[i]]++;
  }
  int count=0;
  for(auto& it:hash )
  {
    if((m-it.second)>0)count+=(m-it.second);
  }
  cout<<count<<el;
}
return 0;
}