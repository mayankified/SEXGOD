#include <iostream>
using namespace std;

//TC: O(root N)
//prime factorization
void trial(int n)
{
    
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)//if n is divisible by i
        {
            cout << i << endl;
            n /= i;
        }
    }
    if(n!=1) cout<<n<<endl;
}
int main()
{
    trial(1000);
    return 0;
}