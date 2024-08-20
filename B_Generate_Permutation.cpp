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
  if((n&1)==0)
  {
    cout<<"-1"<<el;
    continue;
  }
  if(n==1)
  {
    cout<<"1"<<el;
    continue;
  }
  vector<int> p(n);
  p[n/2]=3;
  p[(n/2)+1]=1;
  p[(n/2)-1]=2;
  int j=2;
  int a = 4;
  while((n/2)-j>=0 && (n/2)+j<=(n-1))
  {
    p[(n/2)-j]=a;
    ++a;
    p[(n/2)+j]=a;
    ++a;
    j++;
  }
  for (int j=0;j<n;j++) {
  cout<<p[j]<<" ";
  }
  cout<<el;
}
return 0;
}