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
    //use this only for arrays,vector,deque,etc not for set,map,etc

    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    bool b = binary_search(a.begin(), a.end(), 0); // returns true if the element is present in the range

    lower_bound(a.begin(), a.end(), 3); // returns the iterator pointing to the first element greater than or equal to the given element

    upper_bound(a.begin(), a.end(), 3); // returns the iterator pointing to the first element strictly greater than the given element

    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << endl; // index of the first element strictly greater than the given element
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << endl; // index of the first element greater than or equal to the given element

    // lowerbound => returns iterator>= target
    // upperbound => returns iterator> target
    // lowerbound-1 => returns iterator< target
    // upperbound-1 => returns iterator<= target
    // before usinf -1 check if the iterator is not a.begin()
    auto it = lower_bound(a.begin(), a.end(), 3);
    if (it != a.begin()) it--;
    else //edge case


    //binary search for sorted datatypes ie, map,set,etc
    set<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int it = s.lower_bound(3); // returns the iterator pointing to the first element greater than or equal to the given element
    cout << endl;
    return 0;
}