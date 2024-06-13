#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int hash[26] = {0}; // Initialize the hash array with zeros
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]-'a']++;
    }
    int count = 0;
    for (int j = 0; j < 26; j++) {
        if (hash[j] >= 1) count++;
    }
    if (count % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
