class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        bool visited[1000] = {false};
        int freq[1000];
        int freqSize = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(visited[i])
                continue;
            
            int count = 1;
            visited[i] = true;

            for(int j = i + 1; j<arr.size();j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    visited[j] = true;
                }
            }
            for(int k = 0 ; k < freqSize; k++)
            {
                if(freq[k] == count)
                {
                    return false;
                }
            }
            freq[freqSize++] = count;
        }
        
        return true;
    }
};