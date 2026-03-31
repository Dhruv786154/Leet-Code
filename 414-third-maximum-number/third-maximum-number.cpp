class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max = LONG_MIN;
        long second_max = LONG_MIN;
        long third_max = LONG_MIN;

        // 1st loop → find max
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > max) {
                max = nums[i];
            }
        }

        // 2nd loop → find second max (ignore max)
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < max && nums[i] > second_max) {
                second_max = nums[i];
            }
        }

        // 3rd loop → find third max (ignore max & second)
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < second_max && nums[i] > third_max) {
                third_max = nums[i];
            }
        }

        // if third max doesn't exist → return max
        if(third_max == LONG_MIN) {
            return max;
        }

        return third_max;
    }
};