#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
int v[t];
for(int i=0;i<t;i++)
{
    cin>>v[i];
}
int* it1=max_element(v,v+t);
int max=(*it1);
int* it2=min_element(v,v+t);
int min=(*it2);
int count_max,count_min;
count_min=(v+t)-(it2);
if(it1-v>it2-v)
{
    count_min-=2;
}
count_max=it1-v;
cout<<count_min + count_max;
return 0;
}