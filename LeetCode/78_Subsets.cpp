class Solution {
public:
    vector<vector<int>> all_subsets;
    
    void possibleSubsets(vector<int> &nums, vector<int> arr,int index) {
        if(index >= nums.size())
        {
            all_subsets.emplace_back(arr);
            return;
        }
        
        possibleSubsets(nums, arr, index + 1);
        arr.emplace_back(nums[index]);
        possibleSubsets(nums, arr, index + 1);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        possibleSubsets(nums, arr, 0);
        
        return all_subsets;
    }
};
