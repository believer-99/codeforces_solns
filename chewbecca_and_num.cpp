#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    cin>>num;
    vector<long long int>modified;
    while(num>0)
    {
        int digit=num%10;
        if(digit>=5)
        {
            digit=9-(digit);
        }
        modified.push_back(digit);
        num=num/10;
    }
    if(modified[modified.size()-1]==0)
    {
        modified[modified.size()-1]=9;
    }
    long long int mod_num=0;
    for(int i=modified.size()-1;i>=0;i--)
    {
        mod_num=(mod_num*10)+modified[i];
    }
    cout<<mod_num;
return 0;
}