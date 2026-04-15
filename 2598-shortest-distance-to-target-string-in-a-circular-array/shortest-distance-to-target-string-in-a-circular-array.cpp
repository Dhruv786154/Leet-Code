class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
       int count = 0;
       for(int i=0;i<words.size();i++)
       {
            string inc = words[(i + startIndex) % words.size()];
            string dec = words[(startIndex - i +  words.size()) % words.size()];
            if(inc == target || dec == target)
            {
                return i;
            }
       }
       return -1;
       
    }
};