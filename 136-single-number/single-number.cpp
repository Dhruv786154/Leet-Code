class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int ans = 0;
        // for(int num : nums)
        // {
        //     ans = ans ^ num;
        // }
        // return ans;
        unordered_map<int,int> mp;
        // Count the frequence of the number 
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]] == 1)
            {
                return nums[i];
            }
        }
        return 0;
    }
};