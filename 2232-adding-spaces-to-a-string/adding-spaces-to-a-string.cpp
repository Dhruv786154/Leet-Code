class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans; 
        int j = 0;
        int space;
        for(int i=0;i<s.size();i++)
        {
            if(j < spaces.size())
            {
                space = spaces[j];
            }
            if(i == space)
            {
                ans += ' ';
                j++;
            }
            ans += s[i];

        }      
        return ans;
    }
};