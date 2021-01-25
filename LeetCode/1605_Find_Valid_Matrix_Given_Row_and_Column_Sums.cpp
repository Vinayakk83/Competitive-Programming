class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> arr(rowSum.size(), vector<int> (colSum.size(), 0));
        
        int i = 0, j = 0;
        while(i < rowSum.size() && j < colSum.size()) {
            arr[i][j] = min(rowSum[i], colSum[j]);
            rowSum[i] -= arr[i][j];
            colSum[j] -= arr[i][j];
            if(!rowSum[i])
                i++;
            if(!colSum[j])
                j++;
        }
        
        return arr;
    }
};
