class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 0;
        int i = digits.size()-1;
        while(i>=0)
        {
            if(digits[i] < 9)
            {
                digits[i] += 1;
                break;
            }
            else
            {
                digits[i] = 0;
                i--;
            }    
        }
        // IF all the values are 9 then :-
        if(i < 0){
            digits.insert(digits.begin(),1);
        }        
        return digits;
    }
};