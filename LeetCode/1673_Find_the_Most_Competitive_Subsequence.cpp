class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> ans;
        int remaining = nums.size() - k;
        for(auto i: nums) {
            while(!ans.empty() && remaining && i < ans.back()) {
                ans.pop_back();
                remaining--;
            }
            ans.push_back(i);
        }
        while(remaining) {
            ans.pop_back();
            remaining--;
        }
        return ans;
    }
};
