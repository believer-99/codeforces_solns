#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of strings

    int count = 0; // Initialize a counter

    // Iterate through the strings
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s; // Read each string

        // Check the first and third characters of the string
        if (s[0] == '+')
            count++; // Increment the counter if the first character is '+'
        if (s[0] == '-')
            count--; // Decrement the counter if the first character is '-'
        if (s[2] == '+')
            count++; // Increment the counter if the third character is '+'
        if (s[2] == '-')
            count--; // Decrement the counter if the third character is '-'
    }

    // Output the final count
    cout << count << endl;
    return 0;
}
