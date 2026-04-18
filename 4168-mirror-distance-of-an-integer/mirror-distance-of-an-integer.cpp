class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int ans = 0;
        int digit = 0;
        while(n != 0)
        {
            digit = n % 10;
            ans = (ans * 10) + digit;
            n = n/10;
        }
        return(abs(temp-ans));
        
    }
};