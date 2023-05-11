// Given an array of size N. The task is to rotate array by D elements where D ≤ N.
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        
        int temp[n];
        int j = 0;
        
        for(int  i = d; i < n; i++) {
            temp[j] = arr[i];
            j++;
            
        
        }
        
        for(int i = 0; i < d; i++) {
            temp[j] = arr[i];
            j++;
       
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};

// Example 1:

// Input:
// N = 7
// Arr[] = {1, 2, 3, 4, 5, 6, 7}
// D = 2
// Output: 3 4 5 6 7 1 2
// Explanation: 
// Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
// Rotate by 2: [3, 4, 5, 6, 7, 1, 2]

// Example 2:

// Input:
// N = 4
// Arr[] = {1, 3, 4, 2}
// D = 3
// Output: 2 1 3 4