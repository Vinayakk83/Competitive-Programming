class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> temp;
        int i = 0, j, k;
        
        while(i < mat.size()) {
            temp.clear();
            j = i;
            k = 0;
            while(j < mat.size() && k < mat[0].size()) {
                temp.push_back(mat[j][k]);
                j++;
                k++;
            }
            sort(temp.begin(), temp.end());
            j = i;
            k = 0;
            while(j < mat.size() && k < mat[0].size()) {
                mat[j][k] = temp[k];
                j++;
                k++;
            }
            i++;
        }
        
        i = 1;
        while(i < mat[0].size()) {
            temp.clear();
            j = i;
            k = 0;
            while(j < mat[0].size() && k < mat.size()) {
                temp.push_back(mat[k][j]);
                j++;
                k++;
            }
            sort(temp.begin(), temp.end());
            j = i;
            k = 0;
            while(j < mat[0].size() && k < mat.size()) {
                mat[k][j] = temp[k];
                j++;
                k++;
            }
            i++;
        }
        return mat;
    }
};
