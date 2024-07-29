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
  int n,k;
  cin>>n>>k;
  vector<vector<char>> matrix(n,vector<char>(n));
  for (int i=0;i<n;i++) {
  for (int j=0;j<n;j++) {
  cin>>matrix[i][j];
  }
  }
  vector<vector<char>> ans((n/k),vector<char>(n/k));
  for (int i=0;i<n/k;i++) {
  for (int j=0;j<n/k;j++) {
  ans[i][j]=matrix[i*k][j*k];
  }
  }
  for (int i=0;i<(n/k);i++) {
  for (int j=0;j<(n/k);j++) {
  cout<<ans[i][j];
  }
  cout<<el;
  }
}
return 0;
}