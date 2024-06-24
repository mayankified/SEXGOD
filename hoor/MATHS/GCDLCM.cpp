#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int c = 0;

// euclidian algorithm
// gcd(a,b)=gcd(a&b,b)
//O(log(min(a,b)))
signed EUCgcd(int a, int b)
{    
    c++;
    if (a == 0)
        return b;
    return EUCgcd(b % a, a);
}

//Fibonacci no are worst for this


//LCM(a,b)=a*b/gcd(a,b)

//a*b=LCM(a,b)*gcd(a,b

//GCD(a,a+1)=1

//https://oeis.org/ A website for sequence of numbers

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << EUCgcd(21,34) << endl;
    cout << c << endl;
    return 0;
}