class Solution {
public:
    int minOperations(int n) {
        int ans = n >> 1;
        ans *= ans;;
        if(n & 1)
            ans += n >> 1;
        return ans;
    }
};
