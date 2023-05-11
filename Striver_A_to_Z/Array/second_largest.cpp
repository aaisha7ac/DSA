// Given an array Arr of size N, print second largest distinct element from an array.
// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max = 0;
	    for(int i = 0; i < n; i++) {
	        if(arr[i]>max) {
	            max = arr[i];
	            
	        }
	    }
	    int second = INT_MIN;
	    for(int i = 0; i < n; i++) {
	        if(second < arr[i] && arr[i] < max) {
	            second = arr[i];
	        }
	    }
	    if(second == INT_MIN) {
	        return -1;
	    }
	    return second;
	}
};


// Example 1:

// Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.
// Example 2:

// Input: 
// N = 3
// Arr[] = {10, 5, 10}
// Output: 5
// Explanation: The largest element of 
// the array is 10 and the second 
// largest element is 5.