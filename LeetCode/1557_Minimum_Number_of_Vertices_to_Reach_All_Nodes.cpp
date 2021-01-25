class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>arr(n);
        vector<int> v;
        for(int i = 0; i < edges.size(); i++) {
            arr[edges[i][1]] = true;
        }
        for(int i = 0; i < n; i++) {
            if(!arr[i])
                v.emplace_back(i);
        }
        return v;
    }
};
