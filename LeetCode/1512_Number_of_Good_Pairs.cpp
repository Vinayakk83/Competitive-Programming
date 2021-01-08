class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> freq;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(auto i: freq) {
            ans += (i.second * (i.second - 1)) / 2;
        }
        return ans;
    }
};
