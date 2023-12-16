// TC : O(n * logn) , logn for ordered map
// SC : O(n) , n = size of given vector

#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
        int sum = 0;
        int ans = 0;
        map<int,int>prefixSum;


        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if(sum == k) {
                ans = max(ans,i+1);
            }

            int rem = sum - k;

            if(prefixSum.find(rem) != prefixSum.end()) {
                ans = max(ans,i - prefixSum[rem]);
            }

            if(prefixSum.find(sum) == prefixSum.end()) {
                prefixSum[sum] = i;
            }
        }

        return ans;
}