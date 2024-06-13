#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
cin.ignore();
while(t--)
{
    int n;
    cin>>n;
    int num=n;
    int index=-1,count=0;
    while(n>0)
    {
        int dig=n%10;
        if(dig!=0)++count;
        n/=10;
    }
    cout<<count<<"\n";
    while(num>0)
    {
        int digit=num%10;
        ++index;
        num/=10;
        if(digit==0)continue;
        cout<<(digit*pow(10,index))<<" ";
    }
    cout<<"\n";
}
return 0;
}