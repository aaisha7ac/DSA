class Solution{
    public:
    int getSum(int a[], int n) {
        int sum = 0;
        for ( int i = 0; i < n; i++){
            sum = sum + a[i];
        }
        return sum ;
        
    }
    
};

// Example 1:

// Input:
// 4
// 1 2 3 4
// Output:
// 10
 

// Example 2:

// Input:
// 6
// 5 8 3 10 22 45
// Output:
// 93

