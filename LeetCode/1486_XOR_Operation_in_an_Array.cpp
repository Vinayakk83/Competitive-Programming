class Solution {
public:
    int xorOperation(int n, int start) {
        int numsXor = 0;
        for(int i = 0; i < n; i++) {
            numsXor = numsXor ^ (start + 2 * i);
        }
        return numsXor;
    }
};
