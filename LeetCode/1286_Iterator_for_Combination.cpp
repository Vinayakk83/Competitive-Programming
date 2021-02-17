class CombinationIterator {
public:
    string s, req;
    int n;
    
    CombinationIterator(string characters, int combinationLength) {
        s = characters;
        n = combinationLength;
        req = "";
    }
    
    string next() {
        if(req == "") {
            req = s.substr(0, n);
            return req;
        }
        
        int count = 1, i = req.length() - 1, j = s.length() - 1;
        while(i > -1 && j > -1 && req[i--] == s[j--]) count++;
        req = req.substr(0, n - count) + s.substr(s.find(req[n - count]) + 1, count);
        return req;
    }
    
    bool hasNext() {
        int count = 0, i = req.length() - 1, j = s.length() - 1;
        while(i > -1 && j > -1 && req[i--] == s[j--]) count++;
        if(count == n) 
            return false;
        return true;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
