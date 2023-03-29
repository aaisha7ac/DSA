// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
//  void sort(int *arr,int l, int r) {
//      for(int i = l; i <= r; i++) {
//          for(int j = 0; j <= r -i - 1; j++) {
//              if(arr[j+1] < arr[j] ) {
//              int temp = arr[j];
//              arr[j] = arr[j+1];
//              arr[j+1] = temp;
//          } 
//      }
//  }

    
    int kthSmallest(int arr[], int l, int r, int k) {
        //sorting the element in ascending order using inbuilt function
        sort(arr,arr + r+1);
        return arr[k-1];
    }
};


//Example 1:

// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.

// Example 2:

// Input:
// N = 5
// arr[] = 7 10 4 20 15
// K = 4
// Output : 15
// Explanation :
// 4th smallest element in the given 
// array is 15.