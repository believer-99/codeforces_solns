#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input
    int n;
    cin >> n;
    int problems_solved = 0;

    // Iterate through each problem
    for (int i = 0; i < n; ++i) {
        vector<int> views(3);
        // Read the views of the friends
        for (int j = 0; j < 3; ++j) {
            cin >> views[j];
        }

        // Count how many friends are sure about the solution
        int sure_count = 0;
        for (int j = 0; j < 3; ++j) {
            if (views[j] == 1) {
                sure_count++;
            }
        }

        // If at least two friends are sure, increment the counter
        if (sure_count >= 2) {
            problems_solved++;
        }
    }

    // Output the result
    cout << problems_solved << endl;

    return 0;
}
