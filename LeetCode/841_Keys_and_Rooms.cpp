class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int N = rooms.size();
        bool vis[N];
        memset(vis, false, sizeof(vis));
        
        stack<int> s;
        s.push(0);
        vis[0] = true;
        
        while(!s.empty()) {
            int x = s.top();
            s.pop();
            
            for(auto i: rooms[x]) {
                if(!vis[i]) {
                    vis[i] = true;
                    s.push(i);
                }
            }
        }
        for(auto i: vis)
            if(!i)
                return false;
        return true;
    }
};
