class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        vector<vector<bool>> dp(s.length(), vector<bool>(s.length(), false));
        for(int k = 0; k < s.length(); k++) {
            for(int i = 0, j = k; j < s.length(); i++, j++) {
                if(k == 0)
                    dp[i][j] = true;
                else if(k == 1) {
                    if(s[i] == s[j])
                        dp[i][j] = true;
                }
                else {
                    if(s[i] == s[j] && dp[i + 1][j - 1])
                        dp[i][j] = true;
                }
                if(dp[i][j])
                    count++;
            }
        }
        
        return count;
    }
};
