/*Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K.
The task is to find the element that would be at the kth position of the final sorted array.

Expected Time Complexity: O(Log(N) + Log(M))
Expected Auxiliary Space: O(Log (N))*/

//TC : O(n + m)
//SC : O(1)
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0,j = 0,l = 0;
        int N = n + m;
        int temp[N];
        
        while(i < n && j < m) {
            if(arr1[i] < arr2[j]) {
                temp[l] = arr1[i];
                i++;
            }
            else{
                temp[l] = arr2[j];
                j++;
            }
            l++;
        }
        while(i < n) {
            temp[l] = arr1[i];
            i++;
            l++;
        }
        while(j < m) {
            temp[l] = arr2[j];
            j++;
            l++;
        }
        for(int i = 0; i < N; i++) {
            if(i == k) {
                return temp[i - 1];
            }
        }
        
    }
};

// Example 1:

// Input:
// arr1[] = {2, 3, 6, 7, 9}
// arr2[] = {1, 4, 8, 10}
// k = 5
// Output:
// 6
// Explanation:
// The final sorted array would be -
// 1, 2, 3, 4, 6, 7, 8, 9, 10
// The 5th element of this array is 6.

// Example 2:
// Input:
// arr1[] = {100, 112, 256, 349, 770}
// arr2[] = {72, 86, 113, 119, 265, 445, 892}
// k = 7
// Output:
// 256
// Explanation:
// Final sorted array is - 72, 86, 100, 112,
// 113, 119, 256, 265, 349, 445, 770, 892
// 7th element of this array is 256.