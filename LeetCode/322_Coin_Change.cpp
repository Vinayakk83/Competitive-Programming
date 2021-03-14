class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int max = amount + 1;
        vector<int> dp(amount + 1, max);
        
        dp[0] = 0;
        for(int i = 1; i <= amount; i++) {
            for(auto coin: coins) {
                if(coin <= i) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return dp.back() > amount ? -1 : dp.back();
    }
};
