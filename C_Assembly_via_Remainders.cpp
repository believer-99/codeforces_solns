#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    // Function to enable fast I/O
    fastio()
    
    // Number of test cases
    int t;
    cin >> t;
    
    // Iterate over each test case
    while (t--)
    {
        // Number of elements in the array
        long long n;
        cin >> n;
        
        // Array to store input elements
        vector<long long> a(n - 1);
        
        // Input the array elements
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];
        
        // Vector to store the result
        vector<long long> ans;
        
        // Push the second last element of input array to result vector
        ans.push_back(a[n - 2]);
        
        // Push a large value to handle the last element calculation
        ans.push_back(1e9);
        
        // Calculate remaining elements in the result vector
        for (int i = n - 3; i >= 0; i--)
        {
            ans.push_back(ans.back() - a[i]);
        }
        
        // Reverse the result vector
        reverse(ans.begin(), ans.end());
        
        // Output the result
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
