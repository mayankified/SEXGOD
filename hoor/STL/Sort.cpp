#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
// syntax: sort(starting address, ending address, comparator)

bool comparator(int a, int b)
{
    if ("a should come strictly before b")
        return true;
    else
        return false;
}
//Examples
bool dec(int a, int b)
{
    return a > b;
}
bool inc(int a, int b)
{
    return a < b;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << endl;
    return 0;
}