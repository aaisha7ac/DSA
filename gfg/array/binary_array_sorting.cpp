// Given a binary array A[] of size N. The task is to arrange the array in increasing order.
// Note: The binary array contains only 0  and 1.


class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int temp1[N],temp2[N];
        int j = 0,k=0;
    
        for(int i = 0; i < N; i++) {
            if(A[i] == 0) {
                temp1[j] = 0;
                j++;
            }
            else{
                temp2[k] = 1;
                k++;
            }
        }
        

        int i;
        for(i = 0; i < j; i++) {
            A[i] = temp1[i];
           
        }
        
        for(int j = 0; j < k; j++) {
            A[i] = temp2[j];
            i++;
        }
    }
};

// Example 1:

// Input: 
// 5
// 1 0 1 1 0

// Output: 
// 0 0 1 1 1

// Explanation: 
// After arranging the elements in 
// increasing order, elements will be as 
// 0 0 1 1 1.

// Example 2:

// Input:
// 10
// 1 0 1 1 1 1 1 0 0 0

// Output: 
// 0 0 0 0 1 1 1 1 1 1

// Explanation: 
// After arranging the elements in 
// increasing order, elements will be 
// 0 0 0 0 1 1 1 1 1 1.
