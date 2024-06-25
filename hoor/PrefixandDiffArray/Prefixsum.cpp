#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// prefix sum: is an array where the ith element is the sum of the first i elements of the original array
// time complexity=O(n)

// it helps in questions like find, sum of elements in a range

vector<int> prefixsum(vector<int> &arr)
{
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
        prefix[i] = prefix[i - 1] + arr[i];
    return prefix;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> prefix = prefixsum(arr);
    for (int i = 0; i < prefix.size(); i++)
        cout << prefix[i] << " ";
    int n;
    int a[n + 1], p[n + 1]{};//1 based indexing...
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }
    cout << endl;
    return 0;
}