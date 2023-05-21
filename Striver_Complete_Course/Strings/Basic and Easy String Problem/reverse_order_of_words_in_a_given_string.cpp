/*Given a String S, reverse the string without reversing its individual words.
Words are separated by dots.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)*/

//TC : O(|S|) , |S| = length of the string S
//SC : O (1)

class Solution
{
    public:
    //Function to reverse words in a given string.
 
    string reverseWords(string S) 
    { 
        // code here
        string ans =""; //initializing with null
        string res ="";
     
        for(int i = 0; i < S.length(); i++) {
            if(S[i] =='.') {
                ans = res + ans;
                ans = S[i] + ans;
                res ="";
            }
            else {
                res = res + S[i];
            }
        }
      
        ans = res + ans;
      
        return ans;
    } 
};

/*Example 1:
Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i

Example 2:
Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr*/