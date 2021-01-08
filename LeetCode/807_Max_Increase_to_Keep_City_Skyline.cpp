class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> maxRow(grid.size()), maxColumn(grid[0].size());
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                maxRow[i] = max(maxRow[i], grid[i][j]);
                maxColumn[i] = max(maxColumn[i], grid[j][i]);
            }
        }
        int sum = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                int x = maxRow[i];
                x = min(x, maxColumn[j]);
                sum += (x - grid[i][j]);
            }
        }
        return sum;
    }
};
