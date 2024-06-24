#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// given a matrix of n*n, find the path from top left to bottom right,you can move in all 4 directions but can not visit a cell more than once,
// if there is a blockage in the cell, you can not visit that cell

// count the number of paths

// to handle the not visiting a cell more than once,we will mark the cell as visited and then unmark it after visiting all the paths from that cell

// space complexity=O(n*m)
int path(int i, int j, int n, int m, vector<vector<int>> &arr)
{
    // if we are out of the matrix or there is a blockage
    if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == 1)
        return 0;
    // if we reach the destination
    if (i == n - 1 && j == m - 1)
        return 1;
    // mark the cell as visited
    arr[i][j] = 1;
    // right path=>(i,j+1)
    int right = path(i, j + 1, n, m, arr);
    // left path=>(i,j-1)
    int left = path(i, j - 1, n, m, arr);
    // up path=>(i-1,j)
    int up = path(i - 1, j, n, m, arr);
    // down path=>(i+1,j)
    int down = path(i + 1, j, n, m, arr);
    // unmark the cell, so that we can visit it again
    // this is the backtracking step
    arr[i][j] = 0;
    return right + left + up + down;
}

// automation for paths
int di[4] = {0, -1, 0, 1};
int dj[4] = {1, 0, -1, 0};
string dir = "RTLD";

int pathauto(int i, int j, int n, int m, vector<vector<int>> &arr)
{
    // if we are out of the matrix or there is a blockage
    if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == 1)
        return 0;
    // if we reach the destination
    if (i == n - 1 && j == m - 1)
    {
        return 1;
    }
    // mark the cell as visited
    arr[i][j] = 1;
    int count = 0;
    // for all 4 directions,can modify the directions according to the question
    for (int k = 0; k < 4; k++)
    {
        count += pathauto(i + di[k], j + dj[k], n, m, arr);
    }
    // unmark the cell, so that we can visit it again
    // this is the backtracking step
    arr[i][j] = 0;
    return count;
}


void pathsteps(int i,int j,int n ,int m,vector<vector<int>> &arr,string s){
    // if we are out of the matrix or there is a blockage
    if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == 1)
        return;
    // if we reach the destination
    if (i == n - 1 && j == m - 1)
    {
        cout<<s<<endl;
        return;
    }
    // mark the cell as visited
    arr[i][j] = 1;
    // for all 4 directions,can modify the directions according to the question
    for (int k = 0; k < 4; k++)
    {   
        // push the direction in the path
        s.push_back(dir[k]);
        // move in the direction    
        pathsteps(i + di[k], j + dj[k], n, m, arr,s);
        //backtrack
        s.pop_back();
    }
    // unmark the cell, so that we can visit it again
    // this is the backtracking step
    arr[i][j] = 0;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s="";
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    pathsteps(0,0,n,m,arr,s);
    return 0;
}