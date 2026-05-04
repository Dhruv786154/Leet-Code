class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s+s;
        if(s.size() != goal.size()) return false;

        int pos = -1;
        // if(temp.find(goal) != string::npos)
        if(temp.find(goal) != pos)
        {
            return true;
        }
        else{
            return false;
        }
    }
};