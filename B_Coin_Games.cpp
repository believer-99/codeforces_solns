#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int count_U = 0;
        for (char c : s) {
            if (c == 'U') {
                count_U++;
            }
        }

        if (count_U % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
