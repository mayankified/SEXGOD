#include <iostream>
using namespace std;

//TC: O(N)
bool prime_brute(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

//TC: O(root N)
bool prime_sqrroot(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

//TC: O(N log log N) or estimated O(N)
//sieve of eratosthenes
void sieve(int n)
{
    bool primes[n + 1];
    fill(primes, primes + n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i*i <= n; i++)
        if (primes[i]) // i is prime
        {
            for (int j = i * i; j <= n; j += i) // O(N/2+N/3+N/5+.....)
            //j is multiple of i
                primes[j] = false; // marking all mutiples of i to be non-prime
        }
}
int main()
{
    // cout << prime_sqrroot(10);
    // cout << prime_brute(10);
    sieve(67);

    cout << endl;

    return 0;
}