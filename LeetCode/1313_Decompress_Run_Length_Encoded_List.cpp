class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i += 2) {
            for(int j = 0; j < nums[i]; j++) {
                answer.emplace_back(nums[i + 1]);
            }
        }
        return answer;
    }
};
