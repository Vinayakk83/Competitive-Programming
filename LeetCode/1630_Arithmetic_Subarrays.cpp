class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> subArrays;
        for(int i = 0; i < l.size(); i++)
        {
            int arr[r[i] - l[i] + 1];
            for(int j = l[i], k = 0; j <= r[i]; j++, k++) {
                arr[k] = nums[j];
            }
            sort(arr, arr + (r[i] - l[i] + 1));
            bool flag = true;
            for(int j = 1; j < r[i] - l[i] + 1; j++) {
                if(arr[j] - arr[j - 1] != arr[1] - arr[0]) {
                    flag = false;
                    break;
                }
            }
            subArrays.push_back(flag);
        }
        return subArrays;
    }
};
