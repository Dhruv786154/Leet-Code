class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int result = INT_MAX;
        for(int i=0;i<landStartTime.size();i++)
        {
            for(int j=0;j<waterStartTime.size();j++)
            {
                int landFinishTime =  landStartTime[i] + landDuration[i];
                int waterFinish = max(landFinishTime,waterStartTime[j]) + waterDuration[j];

                result = min(result, waterFinish);

                int waterFinishTime = waterStartTime[j] + waterDuration[j];
                int landFinish = max(waterFinishTime, landStartTime[i])+landDuration[i];

                result = min(result,landFinish);
            }
        }
        return result;
        
    }
};