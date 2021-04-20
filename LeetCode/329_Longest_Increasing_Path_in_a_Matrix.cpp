class Solution {
public:
    int dp[200][200];
    
    int solve(vector<vector<int>>& matrix, int i, int j, int prev) {
        if(i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size() || prev >= matrix[i][j])
            return 0;
        if(dp[i][j])
            return dp[i][j];
        
        dp[i][j] = 1 + max({
                            solve(matrix, i, j + 1, matrix[i][j]), 
                            solve(matrix, i, j - 1, matrix[i][j]), 
                            solve(matrix, i + 1, j, matrix[i][j]), 
                            solve(matrix, i - 1, j, matrix[i][j])
                            });
        
        return dp[i][j];
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int cnt = 0;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                cnt = max(cnt, solve(matrix, i, j, -1));
            }
        }
        return cnt;
    }
};
