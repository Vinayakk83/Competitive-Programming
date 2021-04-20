class Solution {
public:
    string removeDuplicates(string s, int k) {
        for(int i = 1, count = 1; i < s.length(); i++) {
            count = s[i] == s[i - 1]? count + 1: 1;
            if(count == k)
                s = removeDuplicates(s.substr(0, i - k + 1) + s.substr(i + 1), k);
        }
        return s;
    }
};
