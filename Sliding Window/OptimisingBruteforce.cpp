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

//it is Sliding Window Technique, it is used to find the maximum sum of k consecutive elements in an array
    vector<int> a={1,2,3,4,5,6,7,8,9,10};
    int n=a.size();
    int k=3,maxi=0;
    int sum=0;
    //first we will find the sum of first k elements
    for(int i=0;i<k;i++) sum+=a[i];

    //then we will find the sum of next k elements by subtracting the first element of previous k elements and adding the next element
    for(int i=k;i<n;i++){
        sum+=a[i]-a[i-k]; //sliding window
        maxi=max(maxi,sum);
    }
    cout <<maxi<< endl;
    return 0;
}