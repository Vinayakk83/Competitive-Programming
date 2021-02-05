class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> alph(26);
        for(auto i: s) {
            alph[i - 'a']++;
        }
        for(auto i: t) {
            if(alph[i - 'a'])
                alph[i - 'a']--;
        }
        return accumulate(alph.begin(), alph.end(), 0);
    }
};
