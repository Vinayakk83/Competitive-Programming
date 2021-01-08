class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        for(int i = 0, j = 0; i < 2 * n; i += 2, j++) {
            ans[i] = nums[j];
            ans[i+1] = nums[n + j];
        }
        return ans;
    }
};
