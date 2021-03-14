class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        long long int mod = 1e9 + 7;
        int n = arr.size();
        vector<long long int> dp(n, 1);
        sort(arr.begin(), arr.end());
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]] = i;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(arr[i] % arr[j] == 0) {
                    int right = arr[i] / arr[j];
                    if(mp.count(right)) {
                        dp[i] = (dp[i] + dp[j] * dp[mp[right]]) % mod;
                    }
                }
            }
        }
        long long int ans = 0;
        for(auto i: dp) {
            ans = (ans + i) % mod;
        }
        return ans;
    }
};
