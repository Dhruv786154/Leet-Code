bool isPosition(vector<int>& position, int m,int mid)
{
    int ball = 1;
    int lastPos = position[0];
    
    for(int i=1;i<position.size();i++)
    {
        if(position[i] - lastPos >= mid)
        {
            ball++;
            if(ball == m)
            return true;
            lastPos = position[i];
        }
    }
    return false;

}

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int s=0;
        int n = position.size();
        sort(position.begin(),position.end());
        int e = position[n-1] - position[0];
        int ans = -1;
        int mid = s+(e-s)/2;
        while(s<=e)
        {
            if(isPosition(position, m, mid))
            {
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
            mid = s+(e-s)/2;
        }
        return ans;      
    }
};