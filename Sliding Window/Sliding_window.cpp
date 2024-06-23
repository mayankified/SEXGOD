#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int maxi = INT_MIN;

    // first we will find the sum of first k elements
    for (int i = 0; i < k; i++) sum += a[i];
    maxi = max(maxi, sum);

    // then we will find the sum of next k elements by subtracting the first element of previous k elements and adding the next element
    for (int i = k; i < n; i++)
    {
        int add_index = i;
        int remove_index = i - k;
        sum = sum + a[add_index] - a[remove_index]; // sliding window

        maxi = max(maxi, sum);
    }  
    cout << maxi<< endl;
    return 0;
}