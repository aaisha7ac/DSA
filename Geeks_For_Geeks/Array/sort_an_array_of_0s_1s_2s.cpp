// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low = 0;
        int high = n-1;
        int mid = 0;
        
        while(mid <= high) {
            switch(a[mid]) {
                
            case 0:
                swap(a[low],a[mid]);
                mid++;
                low++;
                break;
                
            case 1:
                mid++;
                break;
                
            case 2:
                swap(a[mid],a[high]);
                high--;
                break;
                
            }
           
        }
        
        
    }
    
};


// Example 1:

// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.
// Example 2:

// Input: 
// N = 3
// arr[] = {0 1 0}
// Output:
// 0 0 1
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.