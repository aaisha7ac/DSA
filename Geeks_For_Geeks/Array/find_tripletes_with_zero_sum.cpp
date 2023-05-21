class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        for(int i = 0; i < n-2;i++) {
            for (int j = i + 1; j < n-1; j++) {
                for( int k = j + 1; k < n; k++) {
                    if(arr[i] + arr[j] + arr[k] == 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};


// Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

// Example 1:

// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1
// Explanation: 0, -1 and 1 forms a triplet
// with sum equal to 0.

// Example 2:

// Input: n = 3, arr[] = {1, 2, 3}
// Output: 0
// Explanation: No triplet with zero sum exists. 