class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        queue<vector<int>> q;
        int desNode = graph.size() - 1;
        q.push({0});
        vector<int>curr;
        while(!q.empty()) {
            curr = q.front();
            q.pop();
            int lastNode = curr.back();
            if(lastNode == desNode)
                result.push_back(curr);
            else {
                vector<int> temp = graph[lastNode];
                for(int i = 0; i < temp.size(); i++) {
                    vector<int> arr = curr;
                    arr.push_back(temp[i]);
                    q.push(arr);
                }
            }
        }
        return result;
    }
};
