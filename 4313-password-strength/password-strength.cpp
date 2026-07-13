class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> ch;
        int sum = 0;
        for(int i=0;i<password.size();i++)
        {
            ch.insert(password[i]);
        }
        for(auto c : ch)
        {
            if(islower(c))
            {
                sum += 1;
            }
            else if(isupper(c))
            {
                sum += 2;
            }
            else if(isdigit(c))
            {
                sum += 3;
            }
            else{
                sum += 5;
            }
        }
        return sum;    
    }
};