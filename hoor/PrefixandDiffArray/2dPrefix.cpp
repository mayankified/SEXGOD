#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


//2d prefix sum: Given a 2d array of size n*m, and q queries of the form A,B,C,D
signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    // 1 based indexing
    int prefix[n + 1][m + 1]{};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            // main formula : prefix[i][j]=arr[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]
            prefix[i][j] = arr[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    cout <<"matrix"<< endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout <<"Prefix matrix"<< endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << prefix[i][j];
        }
        cout << endl;
    }
    //To get sum of any sub grid[A,B ==> C,D]
    int A,B,C,D;cin>>A>>B>>C>>D;
    // main formula : prefix[C][D]-prefix[C][B-1]-prefix[A-1][D]+prefix[A-1][B-1] to get the sum of the subgrid
    int ans=prefix[C][D]-prefix[C][B-1]-prefix[A-1][D]+prefix[A-1][B-1];
    cout <<"Ans : "<<ans<< endl;
    return 0;
}