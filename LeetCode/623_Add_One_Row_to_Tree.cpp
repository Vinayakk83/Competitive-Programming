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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1) {
            TreeNode *new_node = new TreeNode(v);
            new_node -> left = root;
            return new_node;
        }
        
        if(d == 2) {
            TreeNode *left_new_node = new TreeNode(v);
            TreeNode *right_new_node = new TreeNode(v);
            left_new_node -> left = root -> left;
            right_new_node -> right = root -> right;
            root -> left = left_new_node;
            root -> right = right_new_node;
            return root;
        }
        
        if(root -> left)
            addOneRow(root -> left, v, d - 1);
        if(root -> right) 
            addOneRow(root -> right, v, d - 1);
        
        return root;
    }
};
