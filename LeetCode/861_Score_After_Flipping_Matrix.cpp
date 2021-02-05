class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); i++) {
            if(!A[i][0])
                for(int j = 0; j < A[0].size(); j++)
                   A[i][j] = (A[i][j] == 0? 1: 0);
        }
        
        int sum = 0, p = 1;
        for(int i = A[0].size() - 1; i >= 0; i--) {
            int ones = 0, zeros = 0;
            for(int j = 0; j < A.size(); j++) {
                if(A[j][i])
                    ones++;
                else
                    zeros++;
            }
            sum += (max(ones,zeros) * p);
            p *= 2;
        }
        
        return sum;
    }
};
