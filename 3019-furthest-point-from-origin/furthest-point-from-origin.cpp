class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count_l = 0;
        int count_r = 0;
        int count_ = 0;
        int base = 0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i] == 'L')
            {
                count_l++;
            }
            else if(moves[i] == 'R')
            {
                count_r++;
            }
            else{
                count_++;
            }
        }
        base = count_r - count_l;
        int option1 = base + count_;
        int option2 = base - count_;
        return max(abs(option1),abs(option2));
    }
};