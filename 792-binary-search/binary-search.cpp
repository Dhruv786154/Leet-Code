class Solution {
public:
// Using Recursion
int solve(vector<int>& nums,int s,int e,int target)
{
    // Base Case
    if(s>e)
    {
        return -1;
    }
    int mid = s + (e-s) / 2;
    if(nums[mid] == target)
    {
        return mid;
    }
    else if(nums[mid] < target)
    {
        return solve(nums,mid+1,e,target);
    }
    else{
        return solve(nums, s,mid-1, target);
    }
}
    int search(vector<int>& nums, int target) {
        int ans = solve(nums, 0, nums.size()-1,target);
        return ans;
        // int start = 0;
        // int end = nums.size()-1;
        // while(start <= end)
        // {
        //     int mid = start + (end - start) / 2;
        //     if(nums[mid] == target)
        //     {
        //         return mid;  
        //     }   
        //     else if(nums[mid] < target)
        //     {
        //         start = mid + 1;
        //     }
        //     else{
        //         end = mid - 1;
        //     }
        // }         
        // return -1;
    }
};