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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return root;
        
        if(root -> val < key) {
            root -> right = deleteNode(root -> right, key);
            return root;
        }
        else if(root -> val > key) {
            root -> left = deleteNode(root -> left, key);
            return root;
        }
        else {
            if(root -> left == NULL) {
                TreeNode *temp = root -> right;
                delete root;
                return temp;
            }
            else if(root -> right == NULL) {
                TreeNode *temp = root -> left;
                delete root;
                return temp;
            }
            else {
                TreeNode *succ_parent = root;
                
                TreeNode *succ = root -> right;
                while(succ -> left != NULL) {
                    succ_parent = succ;
                    succ = succ -> left;
                }
                
                if(succ_parent != root) {
                    succ_parent -> left = succ -> right;
                }
                else {
                    succ_parent -> right = succ -> right;
                }
                
                root -> val = succ -> val;
                delete succ;
                
                return root;
            }
        }
    }
};
