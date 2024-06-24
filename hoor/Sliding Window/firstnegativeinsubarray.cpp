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

    vector<int >a={-3,2,7,-1,2,-3,5,8,9};
    int k=3;
    deque<int> dq;
    for(int i=0;i<k;i++){
        if(a[i]<0) dq.push_back(i);
    }
    if(dq.empty()) cout<<0<<" ";
    else cout<<a[dq.front()]<<" ";
    
    for(int i=k;i<a.size();i++){
        int remove_index=i-k;
        int add_index=i;
        if(a[remove_index]<0) dq.pop_front();
        if(a[add_index]<0) dq.push_back(add_index);
        if(dq.empty()) cout<<0<<" ";
        else cout<<a[dq.front()]<<" ";
    }
    cout<<endl;
    return 0;
}