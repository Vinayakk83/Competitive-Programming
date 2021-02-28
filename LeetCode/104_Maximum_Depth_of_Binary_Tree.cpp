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
    int max_height;
    
    void dfs(TreeNode* root, int h) {
        if(root == NULL) {
            max_height = max(max_height, h);
            return;
        }
        dfs(root -> left, h + 1);
        dfs(root -> right, h + 1);
    }
    
    int maxDepth(TreeNode* root) {
        dfs(root, 0);
        return max_height;
    }
};
