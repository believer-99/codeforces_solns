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
  int count = 0;
  if(n<2)
  {
    cout<<"0"<<el;
    continue;
  }
  if(n<4)
  {
    cout<<"1"<<el;
    continue;
  }
  count = n/4;
  int rem = n%4;
  if(rem==2)count++;
  cout<<count<<el;
}
return 0;
}