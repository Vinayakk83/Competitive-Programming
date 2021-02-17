class Solution {
public:
    void possibleString(string S, int i, vector<string> &ans) {
        
        while(i < S.length() && (S[i] >= '0' && S[i] <= '9')) i++;
        
        if(i >= S.length()) {
            ans.push_back(S);
            return;
        }
        
        possibleString(S, i + 1, ans);
        if(S[i] >= 'a' && S[i] <= 'z')
            S[i] = S[i] - 'a' + 'A';
        else
            S[i] = S[i] - 'A' + 'a';
        possibleString(S, i + 1, ans);
    }
    
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        possibleString(S, 0, ans);
        return ans;
    }
};
