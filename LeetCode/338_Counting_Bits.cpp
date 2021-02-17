class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num + 1);
        for(int i = 1, p = 1; i < num + 1; i++) {
            if(i == p << 1)
                p <<= 1;
            ans[i] = ans[i - p] + 1;
        }
        
        return ans;
    }
};
