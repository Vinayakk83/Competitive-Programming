class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int n = log2(label) + 1;
        int p = 1 << (n - 1);
        vector<int> path(n);
        int i = n - 1;
        while(i >= 0) {
            path[i] = label;
            p >>= 1;
            label = (3 * p) - 1 - (label / 2);
            i--;
        }
        
        return path;
    }
};
