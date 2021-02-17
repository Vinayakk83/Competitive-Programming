class Solution {
public:
    string s = "";
    void dfs(string curr, int n, int &k) {
        if(curr.length() == n) {
            k--;
            if(k == 0)
                s = curr;
            return;
        }
        if(k <= 0)
            return;
        
        for(char ch = 'a'; ch < 'd'; ch++) {
            if(!curr.empty() && ch == curr.back())
                continue;
            curr += ch;
            dfs(curr, n, k);
            curr.pop_back();
        }
    }
    
    string getHappyString(int n, int k) {
        dfs("", n, k);
        return s;
    }
};
