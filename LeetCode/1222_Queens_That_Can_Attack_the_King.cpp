class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> attack_coordinates, board(8, vector<int>(8, 0));
        
        for(auto i: queens)
            board[i[0]][i[1]]++;
        
        vector<int> x{-1,  1,  0,  0,  1, -1, -1,  1};
        vector<int> y{ 0,  0, -1,  1,  1, -1,  1, -1};
        
        for(int i = 0; i < 8; i++) {
            int x_coordinate = king[0], y_coordinate = king[1];
            while(x_coordinate >= 0 && x_coordinate < 8 && y_coordinate >= 0 && y_coordinate < 8) {
                if(board[x_coordinate][y_coordinate]) {
                    attack_coordinates.push_back({x_coordinate, y_coordinate});
                    break;
                }
                x_coordinate = x_coordinate + x[i];
                y_coordinate = y_coordinate + y[i];
            }   
        }
        
        return attack_coordinates;
    }
};
