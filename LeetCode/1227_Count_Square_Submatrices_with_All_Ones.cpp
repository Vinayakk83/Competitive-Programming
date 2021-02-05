class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int answer = 0;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(i == 0 || j == 0) {
                    answer += matrix[i][j];
                    continue;
                }
                if(matrix[i][j] && matrix[i - 1][j] && matrix[i][j - 1] && matrix[i - 1][j - 1]) {
                    matrix[i][j] = min(min(matrix[i][j - 1], matrix[i - 1][j]), matrix[i - 1][j - 1]) + 1;
                }
                answer += matrix[i][j];
            }
        }
        return answer;
    }
};
