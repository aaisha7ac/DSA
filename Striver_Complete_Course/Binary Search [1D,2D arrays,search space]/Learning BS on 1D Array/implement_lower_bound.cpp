// Given a sorted array arr[] of size N without duplicates, 
// and given a value x. Floor of x is defined as the largest 
// element K in arr[] such that K is smaller than or equal to x.
// Find the index of K(0-based indexing).

// Expected Time Complexity: O(log N).
// Expected Auxiliary Space: O(1).

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int  ans = -1;
        for(int i = 0; i < n; i++) {
            if(v[i] <= x) {
                ans = i;
            }
        }
        return ans;
        
    }
};

// Example 1:

// Input:
// N = 7, x = 0 
// arr[] = {1,2,8,10,11,12,19}
// Output: -1
// Explanation: No element less 
// than 0 is found. So output 
// is "-1".

// Example 2:

// Input:
// N = 7, x = 5 
// arr[] = {1,2,8,10,11,12,19}
// Output: 1
// Explanation: Largest Number less than 5 is
// 2 (i.e K = 2), whose index is 1(0-based 
// indexing).