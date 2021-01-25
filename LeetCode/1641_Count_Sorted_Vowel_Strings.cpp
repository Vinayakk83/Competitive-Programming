class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> v(5, 1);
        for(int i = 2; i <= n; i++) {
            for(int j = 3; j >= 0; j--) {
                v[j] += v[j + 1];
            }
        }
        int sum = 0;
        for(auto i: v)
            sum += i;
        return sum;
    }
};
