// Given a sorted array of size N and an integer K,
// find the position(0-based indexing) at which K 
// is present in the array using binary search.

// Expected Time Complexity: O(LogN)
// Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
    }
};

// Example 1:

// Input:
// N = 5
// arr[] = {1 2 3 4 5} 
// K = 4
// Output: 3
// Explanation: 4 appears at index 3.

// Example 2:

// Input:
// N = 5
// arr[] = {11 22 33 44 55} 
// K = 445
// Output: -1
// Explanation: 445 is not present.