class Solution {
public:
    vector<int> count(string s) {
        vector<int> ans(26);
        for(auto i: s)
            ans[i - 'a']++;
        return ans;
    }
    
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> bmax = count("");
        for(auto b: B) {
            vector<int> b_count = count(b);
            for(int i = 0; i < 26; i++)
                bmax[i] = max(bmax[i], b_count[i]);
        }
        
        vector<string> ans;
        for(auto a: A) {
            vector<int> a_count = count(a);
            bool flag = true;
            for(int i = 0; i < 26; i++) {
                if(a_count[i] < bmax[i]) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans.push_back(a);
        }
        return ans;
    }
};
