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
    int deepest = 0;
    int lca(TreeNode* root, int d, TreeNode*& result) {
        
        deepest = max(deepest, d);
        if(root == NULL)
            return d;
        
        int ld = lca(root -> left, d + 1, result);
        int rd = lca(root -> right, d + 1, result);
        
        if(ld == deepest && rd == deepest)
            result = root;
        
        return max(ld, rd);
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        TreeNode* result = NULL;
        lca(root, 0, result);
        return result;
    }
};
