#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define el "\n"
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) ((ll)(x).size())
#define eb emplace_back
#define yes cout<<"YES"<<el
#define no cout<<"NO"<<el
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462
#define INF 1e18
const ll mod = MOD;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

const int limit = 1e6;
vector<bool> prime(limit+1,true);
void sieve()
{
  for(int p=2;p*p<=limit;p++)
  {
    if(prime[p])
    {
      for(int i=p*p;i<=limit;i+=p)
      {
        prime[i]=false;
      }
    }
  }
}

string decimalToBinary(int num) {
    if (num == 0) {
        return "0";
    }
    string binary = "";
    while (num > 0) {
        binary += (num % 2 == 0) ? '0' : '1';
        num /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

ll exp(ll a, ll b, ll Mod){
    a %= Mod;
    ll res = 1;
    while(b > 0) {
        if(b & 1)
        res = res * a % Mod;
        a = a * a % Mod;
        b >>= 1;
    }
    return res % Mod;
}
 
ll mod_inv(ll n){
    return exp(n, mod-2, mod);
}

int main()
{
ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
 freopen("debug.txt","w",stderr);
 #endif
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n;
  cin>>n;
  vector<int> a(n),b(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  for (int j=0;j<n;j++) {
  cin>>b[j];
  }
  int m=0,s=1;
  int diff = a[n-1];
  while(s<=n-1)
  {
    if(a[m]>b[s])diff+=(a[m]-b[s]);
    s++;
    m++;
  }
  cout<<diff<<el;
}
return 0;
}