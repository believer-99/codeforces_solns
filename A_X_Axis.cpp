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
  int a,b,c;
  cin>>a>>b>>c;
  vector<int> arr(3);
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;
  sort(arr.begin(),arr.end());
  int sum = abs(arr[1]-arr[0])+abs(arr[2]-arr[1]);
  cout<<sum<<el;
}
return 0;
}