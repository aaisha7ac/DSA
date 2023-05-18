/*Your task  is to implement the function atoi. 
The function takes a string(str) as argument
and converts it to an integer and returns it.

Note: You are not allowed to use inbuilt function.

Expected Time Complexity: O(|S|), |S| = length of string str.
Expected Auxiliary Space: O(1)*/

//TC : O(|str|)
//SC : O(1)

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        if(str[0] == '-' && str[1] == '-') {
            return -1;
        }
        
        int ans = 0,i;
        int len = str.length();
        
        if(str[0] == '-') {
            i = 1;
        }
        else{
            i = 0;
        }
        
        while(i <= len - 1) {
            if(str[i] < 48 || str[i] > 57) { // ASCII value of digit is from 48 to 57
                return -1;
            }
            ans = ans * 10 + (str[i] - 48);
            
            i++;
        }
        
        if(str[0] == '-') {
            return -ans;
        }
        
        return ans;
    }
    
};

// Example 1:

// Input:
// str = 123
// Output: 123

// Example 2:

// Input:
// str = 21a
// Output: -1
// Explanation: Output is -1 as all
// characters are not digit only.