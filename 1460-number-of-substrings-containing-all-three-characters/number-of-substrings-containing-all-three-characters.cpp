class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> hash(3,0);
        int cnt = 0;
        int left=0;
        for(int right=0;right<s.size();right++)
        {
            hash[s[right]-'a']++;

            while(hash[0] > 0 && hash[1] > 0 && hash[2] > 0)
            {
                cnt += s.size() - right;

                hash[s[left] - 'a']--;
                left++;
            }
        }        
        return cnt;
    }
};