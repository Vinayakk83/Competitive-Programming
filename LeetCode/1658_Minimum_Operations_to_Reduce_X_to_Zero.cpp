class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            mp[sum] = i;
        }
        if(x > sum)
            return -1;
        mp[0] = 0;
        int answer = 0;
        sum -= x;
        int curr = 0;
        for(int i = 0; i < n ;i++) {
            curr += nums[i];
            if(mp.count(curr - sum)) {
                if(curr - sum == 0)
                    answer = max(answer, i - mp[curr - sum] + 1);
                else
                    answer = max(answer, i - mp[curr - sum]);
            }
        }
        return answer == 0? (sum == 0? n: -1): n - answer;
    }
};
