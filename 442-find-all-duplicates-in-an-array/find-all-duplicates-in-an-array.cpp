class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int freq[100001] = {0};

        for(int i = 0; i < nums.size();i++)
        {
            int x = nums[i];
            freq[x]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(freq[i] > 1)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};