class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumArray;
        int sum = 0;
        for(int i : nums){
            sum += i;
            sumArray.emplace_back(sum);
        }
        return sumArray;
    }
};
