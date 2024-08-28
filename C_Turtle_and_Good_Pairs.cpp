#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (auto it : s)
    {
      freq[it - 'a']++;
    }
    string ans = "";
    int j = 0;
    while (j < n)
    {
      int x = 0;
      for (int i = 0; i < 26; i++)
      {
        if (freq[i] > 0)
        {
          ans += (i + 'a');
          freq[i]--;
          j++;
        }
        if(j==n)break;
      }
    }
    cout << ans << endl;
  }

  return 0;
}