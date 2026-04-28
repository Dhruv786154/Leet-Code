class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string temp;

        while(ss >> temp)
        {
            words.push_back(temp);
        }
        if(words.size() != pattern.size()) return false;

        unordered_map<char, string> mp;
        unordered_map<string, char> used;

        for(int i=0;i<pattern.size();i++)
        {
            string word = words[i];

            if(mp.find(pattern[i]) != mp.end())
            {
                if(mp[pattern[i]] != word)
                {
                    return false;
                }
            }
            else{
                if(used.find(word) != used.end())
                {
                    return false;
                }
                mp[pattern[i]] = word;
                used[word] = pattern[i];
            }
        }
        return true;
    }
};