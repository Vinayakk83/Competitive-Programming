class Solution {
public:
    unordered_map<string, bool> mp;
    
    bool solve(string s1, string s2) {
        if(s1.compare(s2) == 0)
            return true;
        
        if(s1.length() <= 1)
            return false;
        
        string temp = s1 + "_" + s2;
        
        if(mp.find(temp) != mp.end())
            return mp[temp];
        
        int n = s1.length();
        for(int i = 1; i < n; i++) {
            if((solve(s1.substr(0, i), s2.substr(n - i, i)) && solve(s1.substr(i, n - i), s2.substr(0, n - i))) || (solve(s1.substr(0, i), s2.substr(0, i)) && solve(s1.substr(i, n - i), s2.substr(i, n - i))))
                return mp[temp] = true;
        }
        
        return mp[temp] = false;
    }
    
    bool isScramble(string s1, string s2) {
        if(s1.length() != s2.length())
            return false;
        
        return solve(s1, s2);
    }
};
