// Given a sorted array A[] of size N, 
// delete all the duplicated elements from A[].
// Modify the array such that if there are X distinct
// elements in it then the first X positions of the array should be filled with 
// them in increasing order and return the number of distinct elements in the array.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int j = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] != a[i+1]) {
                a[j] = a[i];
                j++;
            }
        }
        return j;
    }
};

// Example 1:

// Input:
// N = 5
// Array = {2, 2, 2, 2, 2}
// Output: {2}
// Explanation: After removing all the duplicates 
// only one instance of 2 will remain.

// Example 2:

// Input:
// N = 3
// Array = {1, 2, 2}
// Output: {1, 2}