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

    vector<int> a;
    sort(a.begin(), a.end());//sorts the vector in ascending order
    
    //here [l,r) is the range,l is included and r is excluded

    count(a.begin(), a.begin()+2, 1);//returns the number of elements equal to the given element in the range

    min_element(a.begin(), a.end());//returns the iterator pointing to the minimum element
    max_element(a.begin(), a.end());//returns the iterator pointing to the maximum element

    //to access iterator, use &
    //and also.. index of X = itr of X - v.begin()


    reverse(a.begin(),a.end());//
    cout << endl;
    return 0;
}