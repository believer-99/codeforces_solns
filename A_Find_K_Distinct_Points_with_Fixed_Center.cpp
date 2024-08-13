#include<bits/stdc++.h>
using namespace std;

#define el '\n'
#define ll long long
#define pb push_back

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
        int xc,yc,k;
        cin>>xc>>yc>>k;

        if(k==1)
        {
            cout<<xc<<" "<<yc<<el;
            continue;
        }
        vector<int>x(k),y(k);
        for(int i=0;i<k/2;i++)
        {
            x[i]=xc+i+1;
            x[k-i-1]=xc-i-1;
            y[i]=yc+i+1;
            y[k-i-1]=yc-i-1;
        }
        if(k%2==1)
        {
            x[k/2]=xc;
            y[k/2]=yc;
        }
        for(int i=0;i<k;i++)
        {
            cout<<x[i]<<" "<<y[i]<<el;
        }
    }
    return 0;
}
