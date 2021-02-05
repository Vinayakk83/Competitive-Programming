class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<int> dr {0, 1, 0, -1};
        vector<int> dc {1, 0, -1, 0};
        
        vector<vector<int>> coordinates(R * C, vector<int>(2));
        int t = 0;
        
        coordinates[t][0] = r0;
        coordinates[t][1] = c0;
        t++;
        
        if(R * C == 1)
            return coordinates;
        
        for(int k = 1; k < 2 * (R + C); k += 2) {
            for(int i = 0; i < 4; i++) {
                int dk = k + (i / 2);
                for(int j = 0; j < dk; j++) {
                    
                    r0 += dr[i];
                    c0 += dc[i];
                    
                    if(r0 >= 0 && r0 < R && c0 >= 0 && c0 < C) {
                        coordinates[t][0] = r0;
                        coordinates[t][1] = c0;
                        t++;
                        
                        if(t == R * C)
                            return coordinates;
                    }
                }
            }
        }
        return {};
    }
};
