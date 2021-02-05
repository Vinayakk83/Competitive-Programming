class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        multiset<int> ms;
        for(auto i: nums) {
            if(i&1)
                i *= 2;
            ms.insert(i);
        }
        int ans = (*ms.rbegin()) - (*ms.begin());
        while(!(*ms.rbegin() & 1)) {
            int x = *ms.rbegin();
            ms.erase(x);
            ms.insert(x / 2);
            
            ans = min(ans, (*ms.rbegin()) - (*ms.begin()));
        }
        return ans;
    }
};
