class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        map<int, int>freq;
        for(auto i: arr) 
            freq[i]++;
        
        vector<pair<int, int>> v;
        for(auto i: freq) 
            v.emplace_back(make_pair(i.first, i.second));
        
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        
        int i = 0;
        int n = v.size(), removed_ele = 0;
        while(i < n && 2 * removed_ele < arr.size()) {
            removed_ele += v[i].second;
            i++;
        }
        
        return i;
    }
};
