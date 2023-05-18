/*Given an string S, representing a large interger. 
Return the largest-valued odd integer (as a string) 
that is substring of the given string S.

Note : A substring is a contiguous sequence of characters within a string.
Null string ("") is also a substring.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).*/

//TC : O(|s|) |s| = length of the string
//SC : O(1)

class Solution {
  public:
    string maxOdd(string s) {
        // your code here
       for(int i = s.length() - 1; i >= 0; i--) {
           if(s[i] % 2 == 0) {
               s.pop_back();
           }
           else {
               break;
           }
       }
       return s;
        
    }
};

/*Example 1:

Input: s = "504"
Output: "5"
Explanation: The only subtring "5" is odd number.
 

Example 2:

Input: s = "2042"
Output: ""
Explanation: All the possible non-empty substring have even value.*/