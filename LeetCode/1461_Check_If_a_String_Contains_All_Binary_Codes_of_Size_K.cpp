class Solution {
public:
    
    bool hasAllCodes(string s, int k) {
        set<string> binary_codes;
        for(int i = k; i <= s.length(); i++) {
            binary_codes.insert(s.substr(i - k, k));
        }
        return binary_codes.size() == 1 << k;
    }
};
