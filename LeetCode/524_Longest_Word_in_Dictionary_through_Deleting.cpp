class Solution {
public:
    bool isSubSequence(string s1, string s2) {
        int i = 0, j = 0;
        while(i < s1.length() && j < s2.length()) {
            if(s1[i] == s2[j])
                j++;
            i++;
        }
        return j == s2.length();
    }
    
    string findLongestWord(string s, vector<string>& d) {
        string ans = "";
        int maxLen = 0;
        for(auto i: d) {
            if((i.length() > maxLen || i.length() == maxLen && i.compare(ans) < 0) && isSubSequence(s, i)) {
                ans = i;
                maxLen = i.length();
            }
        }
        return ans;
    }
};
