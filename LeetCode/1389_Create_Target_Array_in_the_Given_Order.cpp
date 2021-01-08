class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> answer(nums.size(), -1);
        for(int i = 0; i < nums.size(); i++) {
            if(answer[index[i]] == -1)
                answer[index[i]] = nums[i];
            else 
            {
                for(int j = nums.size() - 1; j > index[i]; j--)
                {
                    answer[j] = answer[j - 1];
                }
                answer[index[i]] = nums[i];
            }
        }
        return answer;
    }
};
