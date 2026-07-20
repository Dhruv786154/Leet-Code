class Solution {
public:
    int pivotInteger(int n) {
        int left = 0;
        int right = 0;
        for(int i=1;i<=n;i++)
        {
            left = left + i;
            right = 0;
            for(int j=i;j<=n;j++)
            {
                right += j;
            }
            if(left == right)
            {
                return i;
            }
        }
        return -1;
    }
};