/*Given a string S, check if it is palindrome or not.
Expected Time Complexity: O(Length of S)
Expected Auxiliary Space: O(1)*/

//TC : O(|S|) , |S| = length of the string S
//SC : O(1)

//User function template for C++
class Solution{
public:	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n = S.length();
	    int j = n - 1;
	    for(int i = 0; i < n; i++) {
	        if(S[i] != S[j] && i <= j) {
	            return 0;
	        }
	        j--;
	    }
	    return 1;
	}

};

/*Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome*/



