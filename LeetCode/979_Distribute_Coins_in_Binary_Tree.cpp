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
    int dfs(TreeNode* root, int &ans) {
        if(!root)
            return 0;
        
        int leftsteps = dfs(root -> left, ans);
        int rightsteps = dfs(root -> right, ans);
        
        ans += abs(leftsteps) + abs(rightsteps);
        
        return root -> val + leftsteps + rightsteps - 1;
    }
    
    int distributeCoins(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }
};
