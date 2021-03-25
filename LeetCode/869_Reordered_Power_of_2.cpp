class Solution {
public:
    vector<int> count(int N) {
        vector<int> ans(10);
        while(N) {
            ans[N % 10]++;
            N /= 10;
        }
        return ans;
    }
    
    bool reorderedPowerOf2(int N) {
        auto A = count(N);
        for(int i = 0; i < 31; i++) {
            if(A == count(1 << i)) 
                return true;
        }
        return false;
    }
};
