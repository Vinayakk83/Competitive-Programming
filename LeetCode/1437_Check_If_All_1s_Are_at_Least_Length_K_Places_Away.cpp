class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        for(; i < n ; i++)
            if(nums[i])
                break;
        j = i + 1;
        for(; j < n; j++) {
            if(nums[j]) {
                if(j - i - 1 < k) {
                    return false;
                }
                i = j;
            }
        }
        return true;
    }
};
