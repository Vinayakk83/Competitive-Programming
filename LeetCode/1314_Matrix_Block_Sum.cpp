class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> prefix(n + 1, vector<int> (m + 1, 0));
        vector<vector<int>> answer(n, vector<int> (m, 0));
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                prefix[i + 1][j + 1] = mat[i][j] + prefix[i][j + 1] + prefix[i + 1][j] - prefix[i][j];
        
        for(int  i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int r1 = max(0, i - K), c1 = max(0, j - K);
                int r2 = min(n - 1, i + K), c2 = min(m - 1, j + K);
                answer[i][j] = prefix[r2 + 1][c2 + 1] - prefix[r2 + 1][c1] - prefix[r1][c2 + 1] + prefix[r1][c1];
            }
        }
        
        return answer;
    }
};
