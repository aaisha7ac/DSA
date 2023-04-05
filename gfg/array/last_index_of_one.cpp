// Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.

class Solution{
    public:
    int lastIndex(string s) 
    {
        int n = s.length();
        for(int i = n; i >= 0; i--) {
            if(s[i] == '1') {
                return i;
            }
        }
        return -1;
    }

};

// Example 1:

// Input:
// S = 00001
// Output:
// 4
// Explanation:
// Last index of  1 in given string is 4.
 

// Example 2:

// Input:
// 0
// Output:
// -1
// Explanation:
// Since, 1 is not present, so output is -1.

