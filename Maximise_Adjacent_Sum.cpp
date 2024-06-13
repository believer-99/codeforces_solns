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
  int a[n];
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  sort(a,a+n);
  int sum=0;
  for (int j=0;j<n;j++) {
  if( j!=0 && j!=n-1)
  {
    a[j]+=a[j];
  }
  sum+=a[j];
  }
  cout<<sum<<el;
}
return 0;
}