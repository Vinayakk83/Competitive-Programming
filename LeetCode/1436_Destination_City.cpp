class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s;
        for(auto path: paths)
            s.insert(path[0]);
        string it = "";
        for(auto path: paths) {
            if(!s.count(path[1])) {
                it = path[1];
                break;
            }
        }
        return it;
    }
};
