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
    string s;
    cin >> s;
    int n = s.length();
    string dup = "";
    bool done = false;
    for (int i = 0; i < n - 1; i++)
    {
      char c = s[i];
      dup += c;
      if (s[i] == s[i + 1] && !done)
      {
        done = true;
        for (char ch = 97; ch <= 122; ch++)
        {
          if (ch != c)
          {
            dup.push_back(ch);
            break;
          }
        }
      }
    }
    dup += s[n - 1];
    if (!done)
    {
      for (char ch = 97; ch <= 122; ch++)
      {
        if (ch != s[n - 1])
        {
          dup.push_back(ch);
          break;
        }
      }
    }
    cout << dup << el;
  }
  return 0;
}