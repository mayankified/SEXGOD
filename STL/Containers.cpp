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

    pair<int ,string> p={1,"abc"};//pair is a container which can store two values of different data types
    cout<<p.first<<" "<<p.second<<endl;


    vector<int> a;//vector is ordered collection and can be resized
    //random access is possible, i.e. we can access any element in O(1) time
    // vector<int> b(size,value) creates a vector of size 'size' and all elements are initialized to 'value'

    a.begin();//returns the iterator pointing to the first element
    a.end();//returns the iterator pointing to the last element
    a.push_back(1);//inserts element at the end
    a.pop_back();//removes the last element
    a.size();//returns the size of the vector
    a.insert(a.begin()+1,2);//inserts element at the given position
    a.erase(a.begin()+1);//erases the element at the given position
    a.clear();//removes all the elements
    a.empty();//returns true if the vector is empty
    a.front();//returns the first element
    a.back();//returns the last element
    a.resize(5);//resizes the vector to the given size
    a.reserve(10);//reserves the memory for the given size
    a.shrink_to_fit();//reduces the capacity to the size of the vector

    //2d vector
    // vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    //vector<vector<int> (column) > name (row)

    //SET/MAP

    set<int> s={1,4,2,3,5};//set is a container which stores unique elements in sorted order
    //it has no duplicates
    //operations like insert, erase, find can be done in O(logn) time
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout << endl;

    s.count(1);//returns the number of elements equal to the given element
    s.find(1);//returns the iterator pointing to the element
    s.insert(6);//inserts the element   
    s.erase(1);//erases the element
    s.begin();//returns the iterator pointing to the first element
    s.erase(s.begin());//erases the element pointed by the iterator
    s.erase(s.begin(),s.end());//erases the elements in the given range
    s.erase(++s.begin());//erases the element pointed by the iterator
    //set is always sorted in ascending order    


    map<int ,char> mp;//map is a container which stores key value pairs
    //these are stored using a pair
    mp={ {1,'a'},{2,'b'},{3,'c'}};
    for(auto [a,b]:mp)//structured binding: it is used to iterate over the map and get the key and value

    

    {
        cout<<a<<" "<<b<<endl;
    }
    mp.find(1);//returns the iterator pointing to the key,if not found returns mp.end()
    mp.count(1);//returns the number of elements equal to the given key
    mp.insert({4,'d'});//inserts the key value pair
    mp.erase(1);//erases the key value pair
    mp.begin();//returns the iterator pointing to the first element
    mp.erase(mp.begin());//erases the key value pair pointed by the iterator
    mp.erase(mp.begin(),mp.end());//erases the key value pairs in the given range
    mp.erase(++mp.begin());//erases the key value pair pointed by the iterator

    //map is always sorted in ascending order of the keys
    if(mp.find(1)!=mp.end())//to check if the key is present in the map
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is not present"<<endl;
    }


    //unorderd_set/unordered_map
    unordered_set<int> us={1,4,2,3,5};//unordered_set is a container which stores unique elements in unsorted order
    //elemnts are stored in a hash table,so operations like insert,erase,find can be done in O(1) time
    //elements datatype should be hashable

    //this cant store pairs,vector etc

    unordered_map<int ,char> ump;//unordered_map is a container which stores key value pairs
    //these are stored using a pair
    //key should be hashable
    
    return 0;
}