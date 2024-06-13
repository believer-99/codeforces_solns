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
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a;
    cin.ignore();
    cin>>b;
    int k=0,i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            k++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<k<<el;
}
return 0;
}