class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        int i = 0, n = path.length();
        while(i < n) {
            if(path[i] == '/') {
                i++;
                continue;
            }
            
            string str = "";
            while(i < n && path[i] != '/') {
                str += path[i];
                i++;
            }
            
            if(str == ".") continue;
            
            if(str == "..") {
                if(!v.empty())
                    v.pop_back();
                continue;
            }
            v.emplace_back(str);
        }
        
        string ans = "";
        for(auto i: v)
            ans += ("/" + i);
        
        if(ans == "")
            ans = "/";
        
        return ans;
        
    }
};
