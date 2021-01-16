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
    void dfs(TreeNode* curr, int* sum) {
        int temp;
        if(!curr)
            return;
        dfs(curr -> right, sum);
        temp = curr -> val;
        curr -> val += *sum;
        *sum += temp;
        dfs(curr -> left, sum);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        dfs(root, &sum);
        return root;
    }
};
