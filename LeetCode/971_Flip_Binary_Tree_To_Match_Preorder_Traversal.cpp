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
    vector<int> ans, v;
    int i;
    
    bool dfs(TreeNode* root) {
        if(root == NULL)
            return true;
        if(root -> val != v[i++])
            return false;
        if(root -> left != NULL && root -> left -> val != v[i]) {
            ans.emplace_back(root -> val);
            return dfs(root -> right) && dfs(root -> left);
        }
        else
            return dfs(root -> left) && dfs(root -> right);
    }
    
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        i = 0;
        v = voyage;
        ans.clear();
        
        if(dfs(root))
            return ans;
        else
            return {-1};
    }
};
