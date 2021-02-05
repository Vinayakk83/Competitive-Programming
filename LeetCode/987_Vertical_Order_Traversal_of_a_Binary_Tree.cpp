/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    map<int, map<int, set<int>>> mp;
    void solve(TreeNode* curr, int col, int row) {
        if(!curr)
            return;
        mp[col][row].insert(curr -> val);
        solve(curr -> left, col - 1, row + 1);
        solve(curr -> right, col + 1, row + 1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root, 0, 0);
        
        vector<vector<int>> ans;
        
        for(auto i: mp) {
            ans.push_back(vector<int>());
            for(auto j: i.second) {
                for(auto k: j.second) {
                    ans.back().push_back(k);
                }
            }
        }
        
        return ans;
    }
};
