#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    int sum=0;
    vector<string>s;
    for(int i=0;i<t;i++)
    {
       cin>>s[i];
        if(s[i]=="Tetrahedron")sum+=4;
        else if(s[i]=="Cube")sum+=6;
        else if(s[i]=="Octahedron")sum+=8;
        else if(s[i]=="Dodecahedron")sum+=12;
        else if(s[i]=="Icosahedron")sum+=20;
    }
    cout<<sum;
return 0;
}