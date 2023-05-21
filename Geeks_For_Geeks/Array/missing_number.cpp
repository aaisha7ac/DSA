//Finding the missing number
//TC = O(N);
//SC = O(1);

int missingNumber(int A[], int N)
{
    // TC = O(N);
    //SC = O(N);

    /*map<int ,int> mpp;
    for(int i = 0; i < N; i++) {
         mpp[A[i]]++;
    }
    for(int i = 1; i <= N; i++) {
        if(mpp[i] != 1) {
        return i;
    }*/
    
    
    //calculating the sum of natural numbers
    int sum1 = (N * (N+1))/2;
    
    //calculating the sum of given array elements
    int sum = 0;
    for(int i = 0; i < N - 1; i++) {
        sum = sum + A[i];
    }
    
    int ans = sum1 - sum;
    
    return ans;
}


// Example 1:

// Input:                                                       
// N = 4                                        
// A[] = {1, 4, 3}
// Output:
// 2     
// Explanation:
// Vaibhav placed 4 integers but he picked
// up only 3 numbers. So missing number
// will be 2 as it will become 1,2,3,4.
 

// Example 2:

// Input:                        
// N = 5
// A[] = {2, 5, 3, 1}
// Output:
// 4
// Explanation:
// Vaibhav placed 5 integers on the board,
// but picked up only 4 integers, so the
// missing number will be 4 so that it
// will become 1,2,3,4,5.