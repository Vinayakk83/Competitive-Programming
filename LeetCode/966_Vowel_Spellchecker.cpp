class Solution {
public:
    set<string> exact_word;
    map<string, string> lower_word;
    map<string, string> devowel_word;
    
    bool is_vowel(char c) {
        return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    string remove_vowel(string a) {
        string s = "";
        for(auto i: a)
            s += is_vowel(i)? '-': i;
        
        return s;
    }
    
    string to_lower(string a) {
        for(auto &i: a)
            i = tolower(i);
        
        return a;
    }
    
    string solve(string i) {
        if(exact_word.find(i) != exact_word.end())
            return i;
        
        string a = to_lower(i);
        if(lower_word.find(a) != lower_word.end())
            return lower_word[a];

        a = remove_vowel(a);
        if(devowel_word.find(a) != devowel_word.end())
            return devowel_word[a];

        return "";
    }
    
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        for(auto i: wordlist) {
            exact_word.insert(i);
            string a = to_lower(i);
            lower_word.insert({a, i});
            devowel_word.insert({remove_vowel(a), i});
        }
        
        vector<string> ans;
        for(auto i: queries) {
            ans.emplace_back(solve(i));
        }
        
        return ans;
    }
};
