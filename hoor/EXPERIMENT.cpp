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
    vector<int> v = {1, 2, 3, 4, 5};
    unordered_map<int, int> mp;
    mp[1] = 2;
    mp[6] = 3;
    mp[3] = 4;
    // i want to print mp.find(1)
    // but it will return an iterator
    // so i will use the iterator to print the value
    cout << mp.find(2)->first << endl;
    return 0;
}