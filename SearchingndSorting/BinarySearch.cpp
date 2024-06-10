#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


//explanation: Simple Binary Search
bool BS(vector<int> a, int target)
{
    int l = 0, r = a.size() - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == target)
            return true;
        if (a[mid] > target)
            r = mid - 1;
        if (a[mid] < target)
            l = mid + 1;
    }
    return false;
}
// explanation:Returns Last index of target in a if target is found else returns -1
// Time Complexity: O(logn)
int SearchLastIndex(vector<int> a, int target)

{
    int l=0,r=a.size()-1;
    while(l<r)
    {
        int mid = (l+r+1)/2;//mid is biased to right[ceil]
        if(target>=a[mid]) l=mid;//if target is greater than or equal to mid then we can move to right
    
        else r=mid-1;//if target is less than mid then we can move to left
    }
    return a[l]==target?l:-1;//if target is found then return index else return -1
}

//IMP POINTS: 1> if you are stopping at l=r, then mid should be biased to right ie. mid should be floored or ceiled
//2>Make sure to check if target is found at the end of the loop
//3>Make sure if bounds are correct
//4> use L +(R-L)/2 to avoid overflow
//5> if you need to run binary search on infinite list,you can use LLONG_MAX as upper bound and 0 as lower bound
//6> Cieling of mid is used when we need to find the last index of target
//7> Floor of mid is used when we need to find the first index of target
//8> L+(R-L)/2 for floor and L+(R-L+1)/2 for ceil


int SearchFirstIndex(vector<int> a, int target){
    int l=0,r=a.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;//mid is biased to left[floor]
        if(target>a[mid]) l=mid+1;
        if(target<=a[mid])r=mid ;
    }
    return a[r]==target?r:-1;//if target is found then return index else return -1
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a = {1, 3, 2, 5, 2, 7, 2, 9};
    cout << SearchLastIndex(a, 2) << endl;
    cout << endl;
    return 0;
}