/*Given a string S. The task is to find the first repeated character in it.
We need to find the character that occurs more than once and whose index 
of second occurrence is smallest. S contains only lowercase letters.

Expected Time Complexity: O(|S|) 
Expected Auxiliary Space: O(1)*/

//TC : O(|s|) , |s| = length of string s
//SC : O(|s|)

string firstRepChar(string s)
{
    //code here.
   map<char,int>mpp;

   for(int i = 0; i < s.length(); i++) {
       mpp[s[i]]++;
        if(mpp[s[i]] == 2) {
            string ans;
           ans = ans + s[i];
           return ans;
        }
    }
    
    return "-1";
}

/*Example 1:
Input: S="geeksforgeeks"
Output: e
Explanation: 'e' repeats at third position.
 
Example 2:
Input: S="hellogeeks"
Output: l
Explanation: 'l' repeats at fourth position.
 
Example 3:
Input: S="abc"
Output: -1
Explanation: There is no repeated character.*/