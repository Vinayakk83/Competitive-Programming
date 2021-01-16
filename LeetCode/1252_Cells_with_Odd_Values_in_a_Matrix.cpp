class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>>arr(n, vector<int> (m, 0));
        for(int i = 0, j; i < indices.size(); i++) {
            j = 0;
            while(j < m) {
                arr[indices[i][0]][j]++;
                j++;
            }
            j = 0;
            while(j < n) {
                arr[j][indices[i][1]]++;
                j++;
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(arr[i][j]&1)
                    count++;
            }
        }
        return count;
    }
};
