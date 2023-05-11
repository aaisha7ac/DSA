// Given an array containing N integers and an integer K.,
// Your task is to find the length of the longest Sub-Array 
// with the sum of the elements equal to the given value K.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
         int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;
   
    while (j < N) {
        sum += A[j];  //calculation
        if (sum == K) {
          maxLen = max(maxLen, j-i+1);     //taking results
            j++;
        }
        else if (sum < K) {    //adjusting window
            j++;
        }
        else if (sum > K) {     //adjusting window
            while (sum > K) {
                sum -= A[i];
                 i++;
            }
              if(sum == K){
              maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
    } 

};


// Example 1:
 

// Input :
// A[] = {10, 5, 2, 7, 1, 9}
// K = 15
// Output : 4
// Explanation:
// The sub-array is {5, 2, 7, 1}.

// Example 2:

// Input : 
// A[] = {-1, 2, 3}
// K = 6
// Output : 0
// Explanation: 
// There is no such sub-array with sum 6.