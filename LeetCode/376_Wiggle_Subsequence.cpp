class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int up = 1, down = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i - 1])
                down = up + 1;
            if(nums[i] > nums[i - 1])
                up = down + 1;
        }
        return max(up, down);
    }
};
