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
  vector<int> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  if(n==1)
  {
    cout<<"0"<<el;
    continue;
  }
  unordered_map<int,int> count;
  for (int i=0;i<n;i++) {
  count[a[i]]++;
  }
  int maxc=0;
  for(auto &it:count)
  {
    if(it.second>maxc)maxc=it.second;
  }
  cout<<(n-maxc)<<el;
}
return 0;
}