/*Given a string in roman no format (s)  your task is to convert it to an integer .
Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
 
Expected Time Complexity: O(|S|), |S| = length of string S.
Expected Auxiliary Space: O(1)*/

//TC : O(|str|)
//SC : O(1)

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        
        // VX = 5 , XV = 15
        
        map<char,int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int len = str.length();
        int sum = 0;
        for(int i = 0; i < len; i++) {
            if(mp[str[i]] < mp[str[i+1]]) {
                sum = sum - mp[str[i]];
            }
            else{
                sum = sum + mp[str[i]];
            }
        }
        
        return sum;
    }
};

// Example 1:

// Input:
// s = V
// Output: 5

// Example 2:

// Input:
// s = III 
// Output: 3