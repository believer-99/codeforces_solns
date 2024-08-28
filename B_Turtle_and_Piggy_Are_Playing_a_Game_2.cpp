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
  sort(a.begin(),a.end());
  cout<<a[(n/2)]<<el;
}
return 0;
}