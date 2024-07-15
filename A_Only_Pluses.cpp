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
  int maxpro=1;
  for(int i=0;i<=5;i++)
  {
    int aa = a+i;
    int remi=(5-i);
    for(int j=0;j<=remi;j++)
    {
      int bb = b + j;
      int remj= remi-j;
      int cc = c + remj;
      maxpro = max(maxpro,aa*bb*cc);
    }
  }
  cout<<maxpro<<el;
}
return 0;
}