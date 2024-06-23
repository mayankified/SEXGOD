#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

// given a array,find the sum of all subarrays of size k with maximum sum

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a = {1,3,5,2,7};
    int k = 2 , max_sum = 0;
    for (int i = 0; i <= a.size() - k; i++)
    {
        int p = 0;
        for (int j = i; j <= i + k-1; j++)
        {
            p += a[j];
        }
        if (max_sum <= p)
            max_sum = p;
    }
    cout <<max_sum<< endl;
    return 0;
}