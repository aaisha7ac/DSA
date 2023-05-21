/*Given two strings A and B, find if A is a subsequence of B.

Expected Time Complexity: O(N) where N is length of string B.
Expected Auxiliary Space: O(1)*/

//TC : O(|B|) , |B| = length of string B
//SC : O(1)

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
          int count = 0, i = 0, j = 0;
  
        while(i < B.length()) {
            if(B[i] == A[j]) {
                count++;
                j++;
        }
        i++;
        }
  
        if(count == A.length()) {
            return true;
        }
        else {
            return false;
        }
    }
};

/*Example 1:
Input:
A = AXY 
B = YADXCP
Output: 0 
Explanation: A is not a subsequence of B
as 'Y' appears before 'A'.
 

Example 2:
Input:
A = gksrek
B = geeksforgeeks
Output: 1
Explanation: A is a subsequence of B.*/