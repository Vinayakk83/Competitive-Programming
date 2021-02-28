class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int minNum = INT_MAX, maxNum = INT_MIN;
        bool flag = false;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i - 1])
                flag = true;
            if(flag)
                minNum = min(minNum, nums[i]);
        }
        
        flag = false;
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] > nums[i + 1])
                flag = true;
            if(flag)
                maxNum = max(maxNum, nums[i]);
        }
        
        int l = 0;
        while(l < nums.size()) {
            if(minNum < nums[l])
                break;
            l++;
        }
        
        int r = nums.size() - 1;
        while(r >= 0) {
            if(maxNum > nums[r])
                break;
            r--;
        }
        return l > r ? 0: r - l + 1;
    }
};
