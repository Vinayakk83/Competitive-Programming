class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int answer = 0;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i; j < arr.size(); j += 2) {
                for(int k = i; k <= j; k++) {
                    answer += arr[k];
                }
            }
        }
        return answer;
    }
};
