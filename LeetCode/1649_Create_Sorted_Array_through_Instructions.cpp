class Solution {
public:
    int bit[100005];
    const int modulo = 1e9 + 7;
    
    int sum(int i) {
        int ans = 0;
        for(int j = i; j > 0; j -= (j & -j)) {
            ans += bit[j];
            ans %= modulo;
        }
        return ans;
    }
    
    void update(int i) {
        for(int j = i; j < 100005; j += (j & -j)) {
            bit[j] += 1;
            bit[j] %= modulo;
        }
    }
    
    int createSortedArray(vector<int>& instructions) {
        int n = instructions.size();
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            ans += min(sum(instructions[i] - 1), i - sum(instructions[i]));
            ans %= modulo;
            update(instructions[i]);
        }
        
        return ans;
    }
};
