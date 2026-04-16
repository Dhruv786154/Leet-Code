class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int temp = maxi;
            maxi = max(nums[i], max(nums[i]*maxi,nums[i]*mini));
            mini = min(nums[i] , min(nums[i] * temp, nums[i] * mini));

            ans = max(ans , maxi);
        }
        return ans;
    }
};