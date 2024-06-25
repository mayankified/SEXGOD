#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

// Recursion is a technique in which a function calls itself
// Strcuture: base case and recursive case
//Used when solution can be broken down into smaller problems of same type

// print 1 to n
void printninc(int i, int n)
{
    // base case,when to stop
    if (i == n + 1)
        return;

    // recursive case
    cout << i << " ";
    printninc(i + 1, n);
}

// print n to 1
void printndec(int n){
    if(n==0) return;
    cout<<n<<" ";
    printndec(n-1);
}

// factorial of a number
int  factorial(int n){
    if(n==1) return 1;

    // recursive case
    return n*factorial(n-1);
}

bool palindrome(string s){
    int l=0,r=s.length()-1;
    // base case,when l>=r, means we have checked all the characters
    if(l>=r) return true;
    //base case, when the characters at l and r are not equal
    if(s[l]!=s[r]) return false;
    // recursive case, check the next characters
    return palindrome(s.substr(l+1,r-1));
    // s.substr( start ), returns a substring of the string
}

// linear search
bool linear_search(vector<int> &v,int i=0,int n,int key){
    //i is the index, n is the size of the vector
    // base case, when we have checked all the elements
    if(i==n) return false;
    // base case, when we find the key
    if(v[i]==key) return true;
    // recursive case, check the next element
    return linear_search(v,i+1,n,key);
}

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // printninc(1, 5);
    // printndec(5);

    // cout<<factorial(5);
    // cout<<palindrome("abbsa");
    vector<int> v={1,2,3,4,9};
    cout<<linear_search(v,0,v.size(),5);
    cout << endl;
    return 0;
}