class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Using recursion 
        if(n==1)
        {
            return true;
        }
        if(n<=0 || n % 2 != 0)
        {
            return false;
        }
        return isPowerOfTwo(n /2);

        // for(int i=0;i<31;i++)
        // {
        //     int ans = pow(2,i);
        //     if(ans == n)
        //     {
        //         return true;
        //     }
        // }

        // return false;
        
    }
};