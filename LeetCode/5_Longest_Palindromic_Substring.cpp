class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        bool dp[n][n];
        memset(dp, false, sizeof(dp));
        int pos = 0, maxLen = 1;
        for(int i = 0; i < n; i++)
            dp[i][i] = true;
        for(int i = 0, j = 1; i < n && j < n; i++, j++) {
            if(s[i] == s[j]) {
                dp[i][j] = true;
                pos = i;
                maxLen = 2;
            }
        }
        for(int i = 2; i < n; i++) {
            int j = 0, k = i;
            while(j < n && k < n) {
                if(s[j] == s[k] && dp[j + 1][k - 1]) {
                    dp[j][k] = true;
                    if(maxLen < k - j + 1) {
                        pos = j;
                        maxLen = k - j + 1;
                    }   
                }
                j++;
                k++;
            }
        }
        return s.substr(pos, maxLen);
    }
};
