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
    TreeNode* constructBst(vector<int>& preorder, int l, int r) {
        if(l > r)
            return nullptr;
        int i = l + 1;
        while(i <= r && preorder[i] < preorder[l])
            i++;
        TreeNode *root = new TreeNode(preorder[l]);
        root -> left = constructBst(preorder, l + 1, i - 1);
        root -> right = constructBst(preorder, i, r);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root = constructBst(preorder, 0, preorder.size() - 1);
        return root;
    }
};
