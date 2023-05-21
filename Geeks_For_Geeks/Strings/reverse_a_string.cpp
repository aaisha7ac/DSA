/*You are given a string s. You need to reverse the string.
Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).*/

//TC : O(|str|) , |str| = length of string
//SC : O(1)

//User function Template for C++

string reverseWord(string str){
    
  //Your code here
    int len = str.length();
    if(len % 2 == 0) {
        int j = len /2;
        while(j <= len -1) {
            char temp;
            temp = str[len - j -1];
            str[len - j - 1] = str[j];
            str[j] = temp;
            j++;
        }
    }
  
    else {
        int j = (len /2) + 1;
        while(j <= len -1) {
            char temp;
            temp = str[len - j -1];
            str[len - j - 1] = str[j];
            str[j] = temp;
            j++;
        }
    }

    return str;

}

/*Example 1:
Input:
s = Geeks
Output: skeeG

Example 2:
Input:
s = for
Output: rof*/