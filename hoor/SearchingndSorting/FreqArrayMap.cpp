#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// map<char, int> freq; //here char is key and int is value
// map is similar to array,except key can be anything

// implementation of freq array using map
// TC: O(N)
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<char, int> freq;
    string s;
    cin >> s;
    for (auto c : s)    //for each character in string s
        freq[c]++; //incrementing the value of key c
    cout << endl;
    return 0;
}