// Given an unsorted array Arr[] of N integers and an integer X,
// find floor and ceiling of X in Arr[0..N-1].
// Floor of X is the largest element which is smaller than or equal to X. 
// Floor of X doesn’t exist if X is smaller than smallest element of Arr[].

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    int ans1 = -1;
    int ans2 = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= x) {
            ans1 = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
         if(arr[i] >= x) {
            ans2 = arr[i];
            break;
        }
    }

    return make_pair(ans1,ans2);
}


// Example 1:

// Input:
// N = 8, X = 7
// Arr[] = {5, 6, 8, 9, 6, 5, 5, 6}
// Output: 6 8
// Explanation:
// Floor of 7 is 6 and ceil of 7 
// is 8.

// Example 2:

// Input:
// N = 8, X = 10
// Arr[] = {5, 6, 8, 9, 6, 5, 5, 6}
// Output: 9 -1
// Explanation:
// Floor of 10 is 9 but ceil of 10 is not 
// possible.
