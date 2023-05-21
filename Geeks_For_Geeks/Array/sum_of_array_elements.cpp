class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    int s = 0;
	    for( int i = 0; i <n; i++){
	        s = s + arr[i];
	    }
	    return s;
	}
};

// Example 1:

// Input:
// N = 4
// Arr[] = {1, 2, 3, 4}
// Output: 10
// Explanation: 1 + 2 + 3 + 4 = 10.

// Example 2:

// Input:
// N = 3
// Arr[] = {1, 3, 3}
// Output: 7
// Explanation: 1 + 3 + 3 = 7.

