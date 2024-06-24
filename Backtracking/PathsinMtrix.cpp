#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// whenever there is counting using backtracking, our base case should return 0 and 1, according to the question

// Given a matrix of n*n, find the number of paths from top left to bottom right
// going right=>(i, j+1), going down=>(i+1, j)

// arr[i][j] = 1 if there is a blockage, 0 otherwise

int countpaths(int i, int j, int n, int m, vector<vector<int>> &arr)
{
    //if we are out of the matrix or there is a blockage
    //to avoid segmentation fault, we should check for out of matrix first than the blockage
    if (i >= n || j >= m || arr[i][j] == 1)
        return 0;
    //if we reach the destination
    if (i == n - 1 && j == m - 1)
        return 1;
    // right path
    int right = countpaths(i, j + 1, n, m, arr);
    // down path
    int down = countpaths(i + 1, j, n, m, arr);

    return right + down;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << countpaths(0, 0, n, m, arr) << endl;
    return 0;
}