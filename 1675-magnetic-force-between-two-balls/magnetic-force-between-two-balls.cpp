bool isPosition(vector<int>& position, int m,int mid)
{
    int ball = 1;
    int lastPos = position[0];
    
    for(int i=0;i<position.size();i++)
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
        int maxi = -1;
        sort(position.begin(),position.end());
        for(int i=0;i<position.size();i++)
        {
            maxi = max(maxi, position[i]);
        }
        int e = maxi;
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