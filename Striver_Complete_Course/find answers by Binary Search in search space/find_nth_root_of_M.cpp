/* You are given 2 numbers (n , m); the task is to find n√m (nth root of m).
Expected Time Complexity: O(n* log(m))
Expected Space Complexity: O(1)*/

//TC : O(m)
//SC : O(1)

class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	     if(n == 1) {
	        return m;
	    }
	    if(m == 1) {
	        return 1;
	    }
	  
	  int ans;
	  for(int i = 2; i*i <= m; i++) {
	      int count = 0;
	      int rem = m % i;
	      int num = m;
	      if(rem == 0) {
	          while(num % i == 0) {
	              count++;
	              num = num / i;
	          } 
	      }
	     if(num == 1 && count == n) {
	          ans = i;
	      }
	  }
	  
	      if(ans > 1) {
	          return ans;
	      }
	      return -1;
	}  
};

// Example 1:

// Input: n = 2, m = 9
// Output: 3
// Explanation: 3^2 = 9

// Example 2:

// Input: n = 3, m = 9
// Output: -1
// Explanation: 3rd root of 9 is not
// integer.