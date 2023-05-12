// Given two numbers A and B. The task is to find out their LCM and GCD.
// Expected Time Complexity: O(log(min(A, B))
// Expected Auxiliary Space: O(1)


class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        
    /* TLE
        vector<long long> ans;
        long long gcd;
        for(long long i = 1; i <= A; i++) {
          if(A % i == 0 && B % i == 0) {
              gcd = i;
          }
        }
        long long lcm = (A*B)/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans; */
        
        vector<long long> ans;
        long long lcm;
        long long gcd;
        long long mul = A * B;
        
        //using euclidean method
        while(A != 0 && B != 0) {
            if(A > B) {
                A = A % B;
            }
            else{
                B = B % A;
            }
        }    
        
        gcd = A == 0 ? B : A;
        lcm = mul/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

// Example 1:

// Input:
// A = 5 , B = 10
// Output:
// 10 5
// Explanation:
// LCM of 5 and 10 is 10, while
// thier GCD is 5.


// Example 2:

// Input:
// A = 14 , B = 8
// Output:
// 56 2
// Explanation:
// LCM of 14 and 8 is 56, while
// thier GCD is 2.