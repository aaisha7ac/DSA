/*Your task is to implement the function strstr. The function 
takes two strings as arguments (s,x) and  locates the occurrence
of the string x in the string s. The function returns and integer
denoting the first occurrence of the string x in s (0 based indexing).

Note: You are not allowed to use inbuilt function.

Expected Time Complexity: O(|s|*|x|)
Expected Auxiliary Space: O(1)*/

//TC : O(|s|*|x|) , |s| = length of the string s , |x| = length of string x
//SC : O(1)


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    //Your code here
     
    for(int i = 0; i < s.length(); i++) {
        int index = i;
        int count = 0;
        for(int j = 0; j < x.length(); j++) {
            if(s[index] == x[j]) {
                index++;
                count++;
            }
        }

        if(count == x.length()) {
            return i;
        }
    }

    return -1;
}


/*Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.
 

Example 2:

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).*/