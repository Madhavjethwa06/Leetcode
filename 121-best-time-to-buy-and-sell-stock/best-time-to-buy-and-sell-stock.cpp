class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minBuy = prices[0];

        for ( int sell : prices ) {
            minBuy = min(minBuy, sell);
            maxProfit = max(maxProfit, sell - minBuy);
        }

        return maxProfit;
    }
};
