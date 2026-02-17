class Solution {
public:

    vector<vector<int>> ans;
    vector<int> temp;

    void backTrack(int index, vector<int>&nums)
    {
        // Har call me current temp ko ans me daalna
        ans.push_back(temp);


        for(int i=index;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            backTrack(i+1,nums);
            temp.pop_back();
        }
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        backTrack(0,nums);
        return ans;
        
    }
};