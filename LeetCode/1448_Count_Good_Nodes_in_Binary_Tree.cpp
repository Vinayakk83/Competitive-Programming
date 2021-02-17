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
    int count;
    void dfs(TreeNode *root, int maxValue) {
        if(!root)
            return;
        
        if(maxValue <= root -> val)
            count++;
        
        dfs(root -> left, max(maxValue, root -> val));
        dfs(root -> right, max(maxValue, root -> val));
    }
    
    int goodNodes(TreeNode* root) {
        int maxValue = INT_MIN;
        dfs(root, maxValue);
        return count;
    }
};
