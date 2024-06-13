#include <bits/stdc++.h>

using namespace std;

const int MAX_LENGTH = 200'007;
const int MOD_VALUE = 1'000'000'007;

void processString() {
    string inputString;
    cin >> inputString;
    int result = 1;
    bool exceptionCase = false;
    for (int i = 0; i + 1 < (int)(inputString.size()); i++) {
        result += (inputString[i] != inputString[i + 1]);
        exceptionCase |= (inputString[i] == '0' && inputString[i + 1] == '1');
    }
    cout << result - exceptionCase << '\n';
}

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 1; i <= testCases; i++) {
        processString();
    }
    // processString(); // Initial implementation before considering multiple test cases.
    return 0;
}
