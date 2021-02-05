class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int n = nums.size();
        map<int, int>mp;
        
        for(int i = 0; i < n; i++)
            mp[nums[i]]++;
        
        int maxLen = 0;
        
        auto it = mp.begin();
        
        int x1 = it -> first;
        int v1 = it -> second;
        
        while(it != mp.end()) {
            it++;
            int x2 = it -> first;
            int v2 = it -> second;
            
            if(x2 - x1 == 1)
                maxLen = max(maxLen, v1 + v2);
            x1 = x2;
            v1 = v2;
            
        }
        
        return maxLen;
    }
};
