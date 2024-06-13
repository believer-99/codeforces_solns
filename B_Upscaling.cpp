#include <bits/stdc++.h>
using namespace std;

#define el endl

int main()
{
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 1; i <= (2 * n); i++)
    {
      for (int j = 1; j <=(2*n) ; j++)
      {
        if(((i%4==1 || i%4==2) && ((j%4==1) || j%4==2)) || ((i%4==3 || i%4==0) && ((j%4==3) || j%4==0)))
        {
          cout<<"#";
        }
        else{
          cout<<".";
        }
      }
      cout<<endl;
    }
  }
  return 0;
}