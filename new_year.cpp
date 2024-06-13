#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a[3]={x,y,z};
    sort(a,a+3);
    cout<<(a[1]-a[0])+(a[2]-a[1]);
return 0;
}