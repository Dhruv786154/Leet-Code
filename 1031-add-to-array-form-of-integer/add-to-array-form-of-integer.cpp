class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;

        int carry =0;
        int i = num.size()-1;
        while(i>=0 || carry>0 || k>0 )
        {
            int sum = carry;
            if(i>=0)
            {
                sum = sum + num[i];
                i--; 
            }
            if(k>0)
            {
                sum = sum + k % 10;
                k = k/10;
            }
            ans.push_back(sum%10);
            carry = sum/10;
         
        }

        // Reverse the ans vector
           int s = 0;
            int e = ans.size()-1;
            while(s<e)
            {
                swap(ans[s++],ans[e--]);
            }
        return ans;
        //reverse(ans.begin(),ans.end());
        
        // return ans;
    }
};