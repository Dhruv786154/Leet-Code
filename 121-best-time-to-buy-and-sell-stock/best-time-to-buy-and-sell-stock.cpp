class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];

        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else{
                int Profit = prices[i] - minPrice;
                maxProfit = max(maxProfit, Profit);
            }
        }
        return maxProfit;   
        // return 0;
    }
};