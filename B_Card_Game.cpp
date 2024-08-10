#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back
int win(int a1, int b1, int a2, int b2){
    if(a1 > b1){
        if(a2 >= b2) return 1;
    }
    else if(a1 == b1){
        if(a2 > b2) return 1;
    }
    return 0;
}
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
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int count = 0;
  count += win(a,c,b,d);
    count += win(a,d,b,c);
    count += win(b,c,a,d);
    count += win(b,d,a,c);
    cout << count << endl;
}
return 0;
}