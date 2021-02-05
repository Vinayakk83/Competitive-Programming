class Solution {
public:
    bool isPathAvailable(int i, int j, int mid, int n, int m, vector<vector<int>>& heights, vector<vector<int>>& vis) {
        if(i == n - 1 && j == m - 1)
            return true;
        vis[i][j] = 1;
        bool flag = false;
        if(i > 0 && vis[i - 1][j] == 0 && abs(heights[i][j] - heights[i - 1][j]) <= mid)
            flag = flag || isPathAvailable(i - 1, j, mid, n, m, heights, vis);
        if(j > 0 && vis[i][j - 1] == 0 && abs(heights[i][j] - heights[i][j - 1]) <= mid)
            flag = flag || isPathAvailable(i, j - 1, mid, n, m, heights, vis);
        if(i < n - 1 && vis[i + 1][j] == 0 && abs(heights[i][j] - heights[i + 1][j]) <= mid)
            flag = flag || isPathAvailable(i + 1, j, mid, n, m, heights, vis);
        if(j < m - 1 && vis[i][j + 1] == 0 && abs(heights[i][j] - heights[i][j + 1]) <= mid)
            flag = flag || isPathAvailable(i, j + 1, mid, n, m, heights, vis);
        
        return flag;
    }
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        int l = 0, r = 1e6, n = heights.size(), m = heights[0].size(), ans = INT_MAX;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            vector<vector<int>> vis(100, vector<int>(100, 0));
            if(isPathAvailable(0, 0, mid, n, m, heights, vis)) {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        
        return ans;
    }
};
