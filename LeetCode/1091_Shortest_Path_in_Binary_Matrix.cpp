class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid.size() == 0)
            return -1;
        
        int m = grid.size(), n = grid[0].size();
        
        if(grid[0][0] == 1 || grid[m - 1][n - 1] == 1)
            return -1;
            
        queue<pair<int, int>> q;
        
        vector<int> x{0,  0, 1, -1, -1,  1,  1, -1};
        vector<int> y{1, -1, 0,  0,  1,  1, -1, -1};
        
        int path_length = 0;
        q.push(make_pair(0, 0));
        while(!q.empty()) {
            int qsize = q.size();
            path_length++;
            while(qsize--) {
                
                auto curr = q.front();
                q.pop();
                
                if(curr.first == m - 1 && curr.second == n - 1)
                    return path_length;
                
                for(int i = 0; i < 8; i++) {
                    int x_coor = curr.first + x[i];
                    int y_coor = curr.second + y[i];
                    
                    if(x_coor < 0 || x_coor > m - 1 || y_coor < 0 || y_coor > n - 1 || grid[x_coor][y_coor] == 1)
                        continue;
                    
                    q.push(make_pair(x_coor, y_coor));
                    grid[x_coor][y_coor] = 1;
                }
            }
        }
        return -1;
    }
};
