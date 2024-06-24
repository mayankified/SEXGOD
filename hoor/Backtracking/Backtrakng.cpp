#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
// #define int long long

// Given a number n, print all possible sequences of numbers 1 to n having sum x.

//Backtracking follows naturally from recursion. If your search system can not be made recursive then you have to keep track of where you have been and revisit in whatever order you need.

//Conceptually, if you structure the candidate space as some sort of tree, or graph. Then you can think of backtracking as traversing a tree, or graph.


//https://avikdas.com/2020/02/25/a-tree-based-introduction-to-backtracking.html

int counts = 0;

void generate(int i, int sum, int n, int arr[], int target) {
    if (i == n) {
        if (sum == target) counts++;
        return; // Ensure we stop recursion when we reach the end
    } 
    // If we reach the end of the array, we check if the sum is equal to the target
    generate(i + 1, sum + arr[i], n, arr, target); // Include the current element
    generate(i + 1, sum, n, arr, target);          // Exclude the current element
}


//this function returns the count of sequences
int generatee(int i, int sum, int n, int arr[], int target) {

    // If we reach the end of the array, we check if the sum is equal to the target
    if(i==n){
        if(sum==target) return 1;
        return 0;
    } 
    //backtracking, we include the current element and exclude the current element
    return generatee(i+1, sum+arr[i], n, arr, target) + generatee(i+1, sum, n, arr, target);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[4] = {1, 2, 3,4};  // Proper array initialization
    generate(0, 0, 4, a, 7);

    // cout << "Count of sequences: " << counts << endl;
    cout << "Count of sequences: " << generatee(0, 0, 4, a, 7) << endl;
    return 0;  // Ensure the main function returns 0 to indicate successful execution
}
