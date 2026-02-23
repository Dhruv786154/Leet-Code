class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> zeros;
        vector<int> nonZero;

        for(auto x : nums)
        {
            if(x==0)
            {
                zeros.push_back(x); 
            }
            else{
                nonZero.push_back(x);
            }
        }
        
        for(auto x:zeros)
        {
            nonZero.push_back(x);
        }
        nums = nonZero;
    }
};