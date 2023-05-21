class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int j = n-1;
        int i = 0;
        
        
            while(i<=j){
                if(a[i]!=a[j]){
            
                    return false;
                   
                }
                 i++;
                j--;
               
                 
                
            }
        
            return true;
            
    
    
        
      
        
            
        }
    
};

// Given an array of size N and you have to tell whether the array is perfect or not. An array is said to be perfect if it's reverse array matches the original array. If the array is perfect then print "PERFECT" else print "NOT PERFECT".

// Example 1:

// Input : Arr[] = {1, 2, 3, 2, 1}
// Output : PERFECT
// Explanation:
// Here we can see we have [1, 2, 3, 2, 1] 
// if we reverse it we can find [1, 2, 3, 2, 1]
// which is the same as before.
// So, the answer is PERFECT.

// Example 2:

// Input : Arr[] = {1, 2, 3, 4, 5}
// Output : NOT PERFECT