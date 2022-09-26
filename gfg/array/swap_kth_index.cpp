class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    int temp = arr[k-1];
	    arr[k-1] = arr[n-k];
	    //arr[n-k] represents kth index from last.If array would start from index 1 then kth index from last would be aa[n-k+1]
	    
	    arr[n-k] = temp;
	}
	    
	  
};

// Given an array Arr of size N, swap the Kth element from beginning with Kth element from end.

// Example 1:

// Input:
// N = 8, K = 3
// Arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
// Output: 1 2 6 4 5 3 7 8
// Explanation: Kth element from beginning is
// 3 and from end is 6.

// Example 2:

// Input:
// N = 5, K = 2
// Arr[] = {5, 3, 6, 1, 2}
// Output: 5 1 6 3 2
// Explanation: Kth element from beginning is
// 3 and from end is 1.