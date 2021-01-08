class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = -1;
        for(auto i: accounts) {
            int sum = 0;
            for(auto j: i) {
                sum += j;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
