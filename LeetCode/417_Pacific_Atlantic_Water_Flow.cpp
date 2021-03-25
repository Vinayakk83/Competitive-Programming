class Solution {
public:
    void dfs(vector<vector<int>>& matrix, int i, int j, int prev, vector<vector<int>>& reachable) {
        if(i < 0 || i > matrix.size() - 1 || j < 0 || j > matrix[0].size() - 1 || matrix[i][j] < prev || reachable[i][j] == 1)
            return;
        
        reachable[i][j] = 1;
        
        dfs(matrix, i, j + 1, matrix[i][j], reachable);
        dfs(matrix, i, j - 1, matrix[i][j], reachable);
        dfs(matrix, i + 1, j, matrix[i][j], reachable);
        dfs(matrix, i - 1, j, matrix[i][j], reachable);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        if(matrix.size() == 0)
            return {};
        
        vector<vector<int>> pacific(matrix.size(), vector<int>(matrix[0].size(), 0));
        vector<vector<int>> atlantic(matrix.size(), vector<int>(matrix[0].size(), 0));
        
        for(int i = 0; i < matrix.size(); i++) {
            dfs(matrix, i, 0, INT_MIN, pacific);
            dfs(matrix, i, matrix[0].size() - 1, INT_MIN, atlantic);
        }
        
        for(int i = 0; i < matrix[0].size(); i++) {
            dfs(matrix, 0, i, INT_MIN, pacific);
            dfs(matrix, matrix.size() - 1, i, INT_MIN, atlantic);
        }
        
        vector<vector<int>> ans;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(pacific[i][j] && atlantic[i][j])
                    ans.push_back({i, j});
            }
        }
        
        return ans;
    }
};
