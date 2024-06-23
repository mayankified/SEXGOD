#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
map<int, int> prev_values;

//we have to create predicate such that every local minimum is at true false junction
//true if decreasing,false if increasing

int query(int index)
{
    if (prev_values.count(index)) return prev_values[index];

    if(index==0||index==n+1) return INF;

    cout << "? " << index << endl;
    int value;
    cin >> value;

    return prev_values[index] = value;
}
signed main()
{
    // =[3,2,1,4,5]
  
    cin >> n;
int l=0,r=n+1;
    while(r-l>1){
        int mid=(l+r)/2;
        (query(mid)>query(mid+1))?l=mid:r=mid;
    }
    cout<<"! "<<r<<endl;
    return 0;
}