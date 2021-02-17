class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {
            for(int j = 0; j < t.length(); j++) {
                int ii = i, jj = j;
                int diffcount = 0;
                while(ii < s.length() && jj < t.length()) {
                    if(s[ii] != t[jj])
                        diffcount++;
                    if(diffcount == 1) ans++;
                    if(diffcount == 2) break;
                    ii++;
                    jj++;
                }
            }
        }
        return ans;
    }
};
