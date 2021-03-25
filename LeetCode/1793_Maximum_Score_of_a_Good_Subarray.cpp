class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i = k, j = k, score = nums[k], min_num = nums[k];
        while(i > 0 || j < nums.size() - 1) {
            if(i == 0)
                j++;
            else if(j == nums.size() - 1)
                i--;
            else if(nums[i - 1] < nums[j + 1])
                j++;
            else
                i--;
            
            min_num = min(min_num, min(nums[i], nums[j]));
            score = max(score, min_num * (j - i + 1));
        }
        return score;
    }
};
