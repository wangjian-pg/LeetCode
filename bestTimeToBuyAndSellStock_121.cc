/*
 *the algorithm used by the solution is DP
 */
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            if(prices.size() <= 1)
                return 0;
            int max_profit = 0;
            int min_profit = *prices.cbegin();
            for(int i = 1; i < prices.size(); i++){
                if(prices[i] -  min_price > max_profit){
                    max_profit = prices[i] - min_price;
                }else if(prices[i] < min_price){
                    min_price = prices[i];
                }
            }
            return max_profit;
        }
};
