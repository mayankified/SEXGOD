#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Binary Search works on a set of elements where the "predicate" is monotonic
// binary search will move to the left or right based on the predicate
// predicate is a function that returns a boolean value
// predicate is monotonic if it is either always true or always false
// L to mid if predicate is true
// R to mid if predicate is false
//  predicate(i)=> return a[i]<=target

// T T T T F F F F
// 1 1 3 2 1 4 2 5

// BS moves to the T F junction
bool Predicate(int n)
{
}

int AlternateBS(vector<int> a, int target)
{
    int min = 0, max = a.size() - 1;
    int l = min - 1, r = max + 1; //(min-1,max+1) =>[0,n-1] or [min,max]
    // int l = (0) - 1, r = (n-1) + 1;
    // int l = - 1, r = n ;
    while (r - l > 1) // l and r are adjacent
    {
        int m = (l + r) / 2;
        if (a[m] < target) // predicate
            l = m;         // if predicate is true,move l to mid
        else
            r = m; // if predicate is false,move r to mid
    }
}
// L= last true,returns last occurence,always true
// R= first false, returns first occurence,always false
// for this alternate BS, we will be only changing the l and r at top
// this only identifies last true and first false
// so degign the predicate accordingly,such that the ans is the last true or first false


//Goal is to make ans the last true or first false;

//newer goes into infinite loop
//o(logn)
int alternateBSSHort(vector<int> a, int target)
{
    int l = -1, r = a.size();
    // bool predicate(int n) 
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        a[m]>target ? r = m : l = m;//predicate is a[m]>target
    }
    cout << l; //cout based on the requirement
}
//just visualize the predicate and the array
// T T T T F F F F
// 1 1 3 2 1 4 2 5

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
    }
    cout << endl;
    return 0;
}