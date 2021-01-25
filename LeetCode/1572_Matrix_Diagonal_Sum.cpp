class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, n = mat.size();
        for(int i = 0, j = n - 1; i < n; i++, j--) {
            sum += mat[i][i];
            if(i != j)
                sum += mat[i][j];
        }
        return sum;
    }
};
