#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  cin.ignore();

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    string s;
    cin >> s;
    vector<ll> ps(n + 1, 0);
    for (int j = 1; j <= n; j++)
    {
      ps[j] = ps[j - 1] + a[j - 1];
    }
    ll left = 0, right = n - 1;
    while (left < n && s[left] == 'R')
    {
      left++;
    }
    while (right >= 0 && s[right] == 'L')
    {
      right--;
    }
    if (left >= right)
    {
      cout << "0" << el;
      continue;
    }
    ll sum = 0;
    while (left < right)
    {
      if (s[left] == 'L' && s[right] == 'R')
      {
        sum += ps[right + 1] - ps[left];
        left++;
        right--;
      }
      else
      {
        while (left < right && s[left] == 'R')
        {
          left++;
        }
        while (left < right && s[right] == 'L')
        {
          right--;
        }
      }
    }
    cout << sum << el;
  }

  return 0;
}
