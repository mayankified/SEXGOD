#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

//deque: very similar to vector but can be used to insert and delete elements from both ends
//it has two extra functions push_front() and pop_front() which are not present in vector


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> a={1,2,3,4,5};
    a.pop_front();//removes the first element
    a.push_front(1);//inserts the element at the beginning

    //time complexity of push_front() and pop_front() is O(1)
    //other tc are same as vector
    //marginally slower than vaector

    for(auto i:a)
        cout<<i<<" ";
    

    //queue: FIFO
    //push() to insert elemen
    queue<int> q;
    q.push(1);//inserts the element at the end
    q.pop();//removes the first element
    q.front();//returns the first element
    q.back();//returns the last element
    q.empty();//returns true if the queue is empty
    q.size();//returns the size of the queue
    q.swap(q);//swaps the elements of two queues


    //stack: LIFO
    stack<int> s;
    s.push(1);//inserts the element at the top
    s.pop();//removes the top element
    s.top();//returns the top element
    s.empty();//returns true if the stack is empty
    s.size();//returns the size of the stack
    s.swap(s);//swaps the elements of two stacks
    cout << endl;
    return 0;
}