class Solution {
public:
    bool match(string word, string pattern) {
        map<char, char> m1, m2;
        for(int i = 0; i < word.length(); i++) {
            char w = word[i];
            char p = pattern[i];
            if(!m1.count(w)) m1[w] = p;
            if(!m2.count(p)) m2[p] = w;
            if(m1[w] != p || m2[p] != w)
                return false;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string word: words) {
            if(match(word, pattern)) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};
