#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Subsequence is a non-contiguous part of an array but the order of the elements should be maintained
// Subarray is a contiguous part of an array
// Subset is a set that contains all the elements of the array

// Print all subsequences of an array
// Explanation: https://www.youtube.com/watch?v=odrfUCS9sQk
void subseq(vector<int> &v, int i, vector<int> &ans )
{
    // Base case
    if (i == v.size())
    {
        for (auto x : ans) cout << x << " ";
        cout << endl;
        return;
    }

    // Recursive case
    // Include the element
    ans.push_back(v[i]);
    subseq(v, i + 1, ans);

    // Backtracking: exclude the element
    ans.pop_back();
    subseq(v, i + 1, ans);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

     vector<int> a = {1, 3, 4};
    vector<int> ans;
    subseq(a, 0, ans);  // Call the function to print all subsequences

    return 0;
}
