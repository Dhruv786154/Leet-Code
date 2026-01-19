// First approach 
// // Pivot logic
// int getPivot(vector<int>& nums,int n)
// {
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s) / 2;
//     while(s<e)
//     {
//         if(nums[mid] >= nums[0])
//         {
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }
//     int binarySearch(vector<int>& nums, int s,int e,int target) {
//         int start = s;
//         int end = e;
//         while(start <= end)
//         {
//             int mid = start + (end - start) / 2;
//             if(nums[mid] == target)
//             {
//                 return mid;  
//             }   
//             else if(nums[mid] < target)
//             {
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }         
//         return -1;
//     }

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int n = nums.size();
        // int pivot = getPivot(nums,n);
        // if(target >= nums[pivot]  && target <= nums[n-1])
        // {
        //     // BS on second line
        //     return binarySearch(nums,pivot,n-1,target);
        // }
        // else{
        //     // BS on first line 
        //     return binarySearch(nums,0,pivot-1,target);
        // }

    // Second approach 
        int s = 0;
        int n = nums.size();
        int e = n-1;
        
        while(s <= e)
        {
            int mid = s+(e-s)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[s] <= nums[mid])
            {
                if(nums[s] <= target && target <= nums[mid])
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[e])
                {
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
};