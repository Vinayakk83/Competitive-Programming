class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int ans = 0;
        set<string> s(words.begin(), words.end());
        for(auto i: words) {
            for(int k = 1; k < i.length(); k++) {
                s.erase(i.substr(k));
            }
        }
        for(auto i: s) {
            ans += i.length() + 1;
        }
        return ans;
    }
};
