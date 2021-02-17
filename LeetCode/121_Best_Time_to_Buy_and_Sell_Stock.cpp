class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0, minprofit = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minprofit)
                minprofit = prices[i];
            else if(prices[i] - minprofit > maxprofit)
                maxprofit = prices[i] - minprofit;
        }
        return maxprofit;
    }
};
