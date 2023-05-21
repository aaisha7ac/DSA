class Solution {
public:
    int PalinArray(int a[], int n)
    {
        for( int i = 0; i < n; i++) {
            int num = a[i];
            int y = 0;
            while(num>0) {
                y = y * 10 + num%10;
                num = num/10;
                
            }
            
            if(a[i]!= y) {
                return 0;
            }
        }
        
        return 1;
    	
    }
};


// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

 

// Example:
// Input:
// 2
// 5
// 111 222 333 444 555
// 3
// 121 131 20

// Output:
// 1
// 0