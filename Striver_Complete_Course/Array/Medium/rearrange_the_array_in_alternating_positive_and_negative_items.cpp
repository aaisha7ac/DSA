/* Given an unsorted array Arr of N positive and negative numbers. 
Your task is to create an array of alternate positive and negative
numbers without changing the relative order of positive and negative numbers.
Note: Array should start with a positive number.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) */

//TC : O(n)
//SC : O(n + n)


//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    
	    int temp1[n];
	    int temp2[n];
	    int j = 0; 
	    int k = 0;
	    for(int i = 0; i < n; i++) {
	        
	        //placing all the positive integer in temp1
	        if(arr[i] >= 0)  {
	            temp1[j] = arr[i];
	            j++;
	        }
	        
	        //placing all the negative integer in temp2
	        else{
	            temp2[k] = arr[i];
	            k++;
	        }
	    }
	    
	    int l = 0,m = 0,a= 0;
	    int sum = 0;
	    
	    //alternatively placing positive ans negative integer in arr[]
	    while(l < j && m < k) {
	        
	        if(sum  == 0) {
	            arr[a] = temp1[l];
	            l++;
	            a++;
	            sum = 1 - sum;
	        }
	        
	        else{
	            arr[a] = temp2[m];
	            m++;
	            a++;
	            sum = sum - 1;
	        }
	    }
	    
	    while(l < j) {
	        arr[a] = temp1[l];
            l++;
            a++;
	    }
	    
	    while(m < k) {
	        arr[a] = temp2[m];
	        m++;
	        a++;
	    }
	}
};

/*Example 1:

Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
Explanation : Positive elements : 9,4,5,0,2
Negative elements : -2,-1,-5,-3
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 9,-2,4,-1,5,-5,0,-3,2.


Example 2:

Input:
N = 10
Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
Output:
5 -5 2 -2 4 -8 7 1 8 0
Explanation : Positive elements : 5,2,4,7,1,8,0
Negative elements : -5,-2,-8
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 5,-5,2,-2,4,-8,7,1,8,0. */