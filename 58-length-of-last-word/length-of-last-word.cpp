class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size()-1;
        // Skip trailing space 
        while(i>=0 && s[i] == ' ')
        {
            i--;
        }
        // Count the Character
        while(i >= 0 && s[i] != ' ') 
        {
            count++;
            i--;
        }
        return count;
    }
};