#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int each_drink=((k*l)/ n);
    int each_lime=((c*d)/n);
    int salt=(p/n);
    int req_drink=(each_drink/nl);
    int req_lime=each_lime;
    int req_salt=(salt/np);
    int toasts=min(req_drink,req_lime);
    int toast=min(toasts,req_salt);
    cout<<toast;
return 0;
}