class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cp = nums, ans;
        map<int, int> mp;
        sort(cp.begin(), cp.end());
        int count = 0, rep = 0;
        mp[cp[0]] = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(cp[i] != cp[i - 1])
            {
                mp[cp[i]] = i;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            ans.emplace_back(mp[nums[i]]);
        }
        return ans;
    }
};
