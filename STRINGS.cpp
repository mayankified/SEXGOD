
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

    // int tc;cin>>tc;
    // while(tc--){

    // }
    string s = "Mayank";
    vector<string> m = {"mayank", "shreya"};
    // cout<<m[1][3]<<endl;
    // m.begin();
    // m.end()
    cout << m[1] << endl;

    s += " Shreya";

    // reverse(s.begin(),s.end());

    transform(s.begin(), s.end(), s.begin(), ::tolower);//converts strinf to lowercase

        // can you any vector func in string

        // s.pop_back(); 
        // s.push_back('m')

        cout
        << s << endl;
    // s[2]='a';
    // cout<<s<<endl;

    // string->editable
    // string literal -> noteditable "sdsda"
    return 0;
}