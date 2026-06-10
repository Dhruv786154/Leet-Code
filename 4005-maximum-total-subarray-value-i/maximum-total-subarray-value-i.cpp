class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long ki = k;
        long long ans = 0;
        int maxi = nums[0];
        int mini = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);

        }
        ans = ki * (maxi-mini);
        return ans;
        
    }
};