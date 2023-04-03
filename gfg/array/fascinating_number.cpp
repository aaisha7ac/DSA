// Given a number N. Your task is to check whether it is fascinating or not.
// Fascinating Number: When a number(should contain 3 digits or more) is multiplied by 2 and 3,
// and when both these products are concatenated with the original number,
// then it results in all digits from 1 to 9 present exactly once.

class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	   string ans = to_string(n);
	   ans += to_string(n*2);
	   ans += to_string(n*3);
	   
	   int freq[9] = {0};
	   for(int i = 0; i < 9; i++) {
	       freq[ans[i] -'0'- 1]++;
	   }
	   
	   for(int i = 0; i < 9; i++) {
	       if(freq[i] != 1) {
	           return false;
	       }
	   }
	   return true;
	}
};

// Example 1:

// Input: 
// N = 192
// Output: Fascinating
// Explanation: After multiplication with 2
// and 3, and concatenating with original
// number, number will become 192384576 
// which contains all digits from 1 to 9.
// Example 2:

// Input: 
// N = 853
// Output: Not Fascinating
// Explanation: It's not a fascinating
// number.