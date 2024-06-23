#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int numTestCases; // t
    cin >> numTestCases;

    while (numTestCases--) {
        int strLength, numUpdates; // n, m
        cin >> strLength >> numUpdates;
        string originalString; // s
        cin >> originalString;
        vector<int> indices(numUpdates); // ind
        for (int &index : indices) {
            cin >> index;
        }
        string updateChars; // c
        cin >> updateChars;

        // Get unique indices and sort them
        set<int> uniqueIndices(indices.begin(), indices.end());
        vector<int> sortedIndices(uniqueIndices.begin(), uniqueIndices.end());
        sort(updateChars.begin(), updateChars.end());

        // Create a map to associate sorted indices with sorted characters
        map<int, char> indexToChar;
        for (size_t i = 0; i < sortedIndices.size(); ++i) {
            indexToChar[sortedIndices[i]] = updateChars[i];
        }

        // Update the original string with the mapped characters
        for (const auto &kv : indexToChar) {
            originalString[kv.first - 1] = kv.second; // Adjust for 1-based to 0-based index
        }

        // Output the modified string
        cout << originalString << endl;
    }

    return 0;
}




