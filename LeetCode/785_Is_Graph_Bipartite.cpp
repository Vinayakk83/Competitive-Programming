class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int gSize = graph.size();
        vector<int> colors(gSize);
        
        for(int i = 0; i < gSize; i++) {
            if(colors[i] != 0)
                continue;
            
            queue<int> q;
            q.push(i);
            colors[i] = 1;
            
            while(!q.empty()) {
                int curr = q.front();
                q.pop();
                
                for(auto next: graph[curr]) {
                    if(colors[next] == 0) {
                        colors[next] = - colors[curr];
                        q.push(next);   
                    }
                    
                    if(colors[next] == colors[curr])
                        return false;
                }
            }
        }
        return true;
    }
};
