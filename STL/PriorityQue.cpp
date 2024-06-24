#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

//priority queue is a data structure that stores elements in a sorted order
//except you can only access the top element
//by default it is a max heap
//it takes log(n) time to insert and delete elements
//it can store duplicates,similar to multi set
//it is implemented using a heap,,max heap by default


//custom comparator
bool comp(int a,int b)
{
    return a>b;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int> pq;//much faster than set,but you can only access the top element
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.pop();//removes the top element
    pq.size();//returns the size of the priority queue
    pq.top();//returns the top element

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
//                datatype ,container,comparator    
    priority_queue<int,vector<int>,greater<int>> pq1;//min heap
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.push(4);
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

//using a custom comparator,comp is a bool function
    priority_queue<int,vector<int>,decltype(&comp)> pq2;
    cout << endl;
    return 0;
}