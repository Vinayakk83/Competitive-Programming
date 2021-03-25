class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy_state = -prices[0], sell_state = 0;
        for(int i = 1; i < prices.size(); i++) {
            sell_state = max(sell_state, buy_state + prices[i] - fee);
            buy_state = max(buy_state, sell_state - prices[i]);
        }
        return sell_state;
    }
};
