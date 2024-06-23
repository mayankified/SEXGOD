#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

//two pointer 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //two pointer technique, we will keep track of the last occurence of the character
    //and if we find a character which is already present in the current window, we will move the left pointer to the next of the last occurence of the character
    string s="abcabcbb";
    int n=s.size();
    vector<int> last(256,-1);
    int left=0;
    int right=0;
    int ans=0;
    while(right<n)
    {
        if(last[s[right]]!=-1)
        {
            left=max(left,last[s[right]]+1);
        }
        last[s[right]]=right;
        ans=max(ans,right-left+1);
        right++;
    }
    cout << ans;
    cout << endl;
    return 0;
}