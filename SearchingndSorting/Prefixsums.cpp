#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

//prefix sum is used to calculate the sum of elements in a range 
//O(1) to calculate sum of elements in a range
//O(N) to calculate prefix sum array


const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[5] = {4, 2, 5, 6, 3};

    int p[10]{};//it initializes all elements to 0

    int prefix[5];
    prefix[0] = a[0];
    for(int i=1;i<5;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    //explanation: prefix[0]=4, prefix[1]=4+2=6, prefix[2]=6+5=11, prefix[3]=11+6=17, prefix[4]=17+3=20

    // for(int i=0;i<5;i++) cout<<prefix[i]<<endl;


    //for range 2 to 3

    int l=2,r=4;

    if(l!=0) cout<<prefix[r]-prefix[l-1]<<endl;
    else cout<<prefix[r]<<endl;

    //explantion: prefix[4]-prefix[1]=14-6=8 , sum of elements from 2 to 4 is 8

    cout << endl;
    return 0;
}