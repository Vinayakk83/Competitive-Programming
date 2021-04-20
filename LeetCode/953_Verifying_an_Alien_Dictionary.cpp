class Solution {
public:
    vector<int> letters_order;
    
    bool checkOrder(string s1, string s2) {
        int i = -1;
        while(++i < s1.length() && i < s2.length()) {
            if(letters_order[s1[i] - 'a'] != letters_order[s2[i] - 'a'])
                return letters_order[s1[i] - 'a'] < letters_order[s2[i] - 'a'];
        }
        return s1.length() <= s2.length();
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        letters_order = vector<int>(26);
        for(int i = 0; i < 26; i++)
            letters_order[order[i] - 'a'] = i;
        for(int i = 0; i < words.size() - 1; i++) {
            if(!checkOrder(words[i], words[i + 1]))
                return false;
        }
        return true;
    }
};
