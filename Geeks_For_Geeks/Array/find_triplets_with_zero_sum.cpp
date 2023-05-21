// Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero.
//Time Complexity = O(n^2)

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        for(int i = 0; i < n; i++) {
            
            int r = n - 1;
            int l = i + 1;
            int x = arr[i];
            
            while(l < r) {
                if(arr[r] + arr[l] + x == 0) {
                    r--;
                    l++;
                    return true;
                }
                else if(arr[r] + arr[l] + x  < 0) {
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return false;
        //Your code here
    }
};

// Example 1:
// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1
// Explanation: 0, -1 and 1 forms a triplet
// with sum equal to 0.

// Example 2:
// Input: n = 7, arr[] = {-2,6,1,2,-1,-4,0}
// Output: 1
// Explanation: (-2,6,-4) , (-1,1,0) and (-2,2,0) form triplets
// with sum equal to 0.

// Example 3:
// Input: n = 3, arr[] = {1, 2, 3}
// Output: 0
// Explanation: No triplet with zero sum exists.