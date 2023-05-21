/*Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for
every character of str1 to every character of str2 while preserving the order.

Note: All occurrences of every character in str1 should map to the same character in str2

Expected Time Complexity: O(|str1|+|str2|).
Expected Auxiliary Space: O(Number of different characters).
Note: |s| represents the length of string s.*/

//TC : O(|str1|) , |str1| = length of string str1
//SC : O(N + N) , N = number of different characters 
 
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int len1 = str1.length();
        int len2 = str2.length();
        
        if(len1 != len2) {
            return false;
        }
        
        int hash1[256] = {0};
        int hash2[256] = {0};
        
        for(int i = 0; i < len1; i++) {
            // one to one mapping of new character of str1 and str2 for once 
            if(!hash1[str1[i]] and !hash2[str2[i]]) { 
                hash1[str1[i]] = str2[i];
                hash2[str2[i]] = str1[i];
                
            }
            //if it is already mapped checking whether they are equal or not
            else if(hash1[str1[i]] != str2[i]) {
                return false;
            }
        }
        
        return true;
        
  
    }
};

/*Example 1:
Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.

Example 2:
Input:
str1 = aab
str2 = xyz
Output: 0
Explanation: There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.*/