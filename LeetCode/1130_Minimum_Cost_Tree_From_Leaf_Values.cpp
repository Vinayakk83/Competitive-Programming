class Solution {
public:
    map<pair<int, int>, pair<int, int>> dp;
    
    pair<int, int> solve(int l, int r, vector<int> &arr) {
        
        if(dp.count({l, r}))
            return dp[{l, r}];
        
        if(l == r)
            return dp[{l, r}] = {arr[l], 0};
        
        int maxLeave, minSum = INT_MAX;
        for(int i = l; i < r; i++) {
            auto left = solve(l, i, arr);
            auto right = solve(i + 1, r, arr);
            
            maxLeave = max(left.first, right.first);
            minSum = min(minSum, left.second + right.second + left.first * right.first);
        }
        
        return dp[{l, r}] = {maxLeave, minSum};
    }
    
    int mctFromLeafValues(vector<int>& arr) {
        return solve(0, arr.size() - 1, arr).second;
    }
};
