/*Given an integer x, find the square root of x.
If x is not a perfect square, then return floor(√x).

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)*/

//TC : O(x);
//SC : 0(1);

// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        long long ans;
        
        for(long long i = 1; i * i <= x; i++) {
           ans = i;
        }
        return ans;
       
        
    }
};

// Example 1:

// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect 
// square, floor of square_root of 5 is 2.

// Example 2:

// Input:
// x = 4
// Output: 2
// Explanation: Since, 4 is a perfect 
// square, so its square root is 2.