class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for(auto str: strs) {
            int ones = 0, zeroes = 0;
            for(auto i: str) {
                if(i == '0')
                    zeroes++;
                else
                    ones++;
            }
            for(int i = n; i >= ones; i--) {
                for(int j = m; j >= zeroes; j--) {
                    dp[i][j] = max(dp[i][j], dp[i - ones][j - zeroes] + 1);
                }
            }
        }
        return dp[n][m];
    }
};
