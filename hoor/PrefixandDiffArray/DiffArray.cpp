#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


// Diff Array: Given an array of size n, and q queries of the form l,r,k
// Add k to all elements in the range l to r
// Print the final array
signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    //[0,0,0,0,0,0]
    //[k,0,0,0,-K,0]
    //[k,k,k,k,0,0]

    int n, q;
    cin >> n >> q;
    int a[n + 2]{};// 1 based indexing and one extra element to avoid segmentaion fault when query includes the last elemnt(r+1)
    while (q--)
    {
        int l, r, k;
        // l,r are the range and k is the value to be added
        cin >> l >> r >> k;

        // add k to the lth element
        a[l] += k;

        // subtract k from the r+1th element
        a[r+1] -= k;
    }
    for (int i = 1; i <= n; i++)
    {
        // prefix sum
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }

    cout << endl;
    return 0;
}