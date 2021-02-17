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
public:
    int level = -1;
    void dfs(TreeNode* root, vector<int> &v, int l) {
        
        if(!root)
            return;
        
        if(level < l) {
            v.emplace_back(root -> val);
            level = l;
        }
        
        dfs(root -> right, v, l + 1);
        dfs(root -> left, v, l + 1);
    }
        
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        dfs(root, v, 0);
        return v;
    }
};
