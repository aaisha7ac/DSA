/* Given two strings a and b consisting of lowercase characters.
The task is to check whether two given strings are an anagram 
of each other or not. An anagram of a string is another string 
that contains the same characters, only the order of characters 
can be different. For example, act and tac are an anagram of each other.

Note:-

If the strings are anagrams you have to return True or else return False

|s| represents the length of string s.

Expected Time Complexity:O(|a|+|b|).
Expected Auxiliary Space: O(Number of distinct characters). */

//TC : O(total number of character 256)
//SC : O(1)

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
    
        if(a.length() != b.length()) {
            return false;
        }
        int hash1[256] = {0};
        int hash2[256] = {0};
        
        
        for(int i = 0; i < a.length(); i++) {
            hash1[a[i]]++;
        }
        
        for(int i = 0; i < b.length(); i++) {
            hash2[b[i]]++;
        }
        
        for(int i = 0; i < 256; i++) {
            if(hash1[i] != hash2[i]) {
                return false;
            }
        }
        return true;
        
    }

};

/* Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
same frequency. So, both are anagrams.


Example 2:

Input:a = allergy, b = allergic
Output: NO
Explanation: Characters in both the strings are 
not same, so they are not anagrams. */