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

//Input: 55 60 87 90 95 100
//Output: 95