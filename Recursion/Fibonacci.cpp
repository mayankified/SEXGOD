#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// but the time complexity of this function is exponential,because we are calling the function twice and the function is called 2^n times in total.
// tme complexity is O(2^n)
// space complexity is O(n)
int fibonacii(int n)
{
    if (n <= 1)
        return n;
    return fibonacii(n - 1) + fibonacii(n - 2);
}

// so we can use memoization to store the values of the function that we have already calculated
// time complexity is O(n)
// space complexity is O(n)
int fib_memo(int n)
{
    vector<int> dp(n + 1, -1);
    if (n <= 1)
        return n;

    //if we have already calculated the value of the function, then return it
    if (dp[n] != -1)
        return dp[n];

    //otherwise calculate the value of the function and store it in the dp array
    return dp[n] = fib_memo(n - 1) + fib_memo(n - 2);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // cout << fibonacii(10);
    cout<<fib_memo(10);
    cout << endl;
    return 0;
}