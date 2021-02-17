class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix_xor(n + 1), ans;
        for(int i = 1; i < n + 1; i++) 
            prefix_xor[i] = prefix_xor[i - 1] ^ arr[i - 1];
        for(auto q: queries)
            ans.emplace_back(prefix_xor[q[1] + 1] ^ prefix_xor[q[0]]);
        return ans;
    }
};
