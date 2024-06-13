#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    // Taking input for the length of the string
    int n;
    cin >> n;
    
    // Taking input for the string
    string b;
    cin >> b;
    
    // Initializing a vector to count the occurrence of each letter (a-z)
    vector<int> cnt(26, 0);
    
    // Counting the occurrence of each letter in the string
    for (char c : b) {
        cnt[c - 'a'] = 1;
    }
    
    // Creating a string containing only distinct characters from the input string
    string tmp;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] > 0) {
            tmp += char('a' + i);
        }
    }
    
    // Creating the resulting string
    string a;
    for (char c : b) {
        // Appending the corresponding character from the end of tmp to a
        a += tmp[tmp.size() - tmp.find(c) - 1];
    }
    
    // Printing the resulting string
    cout << a << endl;
}

int main() {
    // Taking input for the number of test cases
    int t;
    cin >> t;
    
    // Calling solve() for each test case
    while (t--) {
        solve();
    }
    
    return 0;
}
