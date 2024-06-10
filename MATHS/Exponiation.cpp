#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// O(log[n])
// 13->6->3->1->0

// binary expo
// when b is even , a^b = a^(b/2) * a^(b/2)
// when b is odd , a^b = a^(b/2) * a^(b/2) * a
signed power(int a, int b)
{
    if (b == 0)
        return 1;
    int half_power = power(a, b / 2);
    if (b % 2 == 0)
        return half_power * half_power;
    else
        return half_power *half_power *a;
}

// modular expo
// when b is even , a^b%m= (a^(b/2)%m)^2 *%m
// when b is odd , a^b%m= ((a^(b/2)%m)^2* a%m)%m
signed ModExpo(int a, int b)
{
    if (b == 0)
        return 1;
    int half_power = ModExpo(a, b / 2);
    if (b % 2 == 0)
        return half_power * half_power % MOD;
    else
        return half_power *half_power % MOD *(a % MOD) % MOD;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
    }

    return 0;
}