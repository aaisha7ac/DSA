// TC : O(2n)
// SC : O(1)

#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long n = a.size(),sum = 0;
    int i = 0,j = 0;
    int ans = 0;

    while(j < n) {
        sum += a[j];
        while(i <= j && sum > k) {
            sum -= a[i];
            i++;
        }

        if(sum == k) {
            ans = max(ans,j-i+1);
        }

        j++;
    }

    return ans;
}