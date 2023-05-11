// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.

//TC = O(n + m)
//SC = O(n + m) Here no extra space is used but in worst case when we have to return the whole array.

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {

        vector<int>ans;
        int i = 0, j = 0;
        while(i < n && j < m) {
            
            if(arr1[i] <= arr2[j]) {
                if(ans.size() == 0 || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
            }
            
            else {
                if(ans.size() == 0 || ans.back() != arr2[j]) {
                    ans.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(i < n) {
                if(ans.size() == 0 || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
        }
        
        while(j < m) {
           if(ans.size() == 0 || ans.back() != arr2[j]) {
                    ans.push_back(arr2[j]);
            }
            j++;
        }
        
        return ans;
    }
};

// Example 1:
// Input: 
// n = 5, arr1[] = {1, 2, 3, 4, 5}  
// m = 3, arr2 [] = {1, 2, 3}
// Output: 1 2 3 4 5
// Explanation: Distinct elements including 
// both the arrays are: 1 2 3 4 5.
 

// Example 2:
// Input: 
// n = 5, arr1[] = {2, 2, 3, 4, 5}  
// m = 5, arr2[] = {1, 1, 2, 3, 4}
// Output: 1 2 3 4 5
// Explanation: Distinct elements including 
// both the arrays are: 1 2 3 4 5.
 

// Example 3:
// Input:
// n = 5, arr1[] = {1, 1, 1, 1, 1}
// m = 5, arr2[] = {2, 2, 2, 2, 2}
// Output: 1 2
// Explanation: Distinct elements including 
// both the arrays are: 1 2.