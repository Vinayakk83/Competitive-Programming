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
    int arr[1001];
    
    TreeNode* dfs(TreeNode* root, vector<TreeNode*> &ans) {
        if(root == NULL)
            return NULL;
        
        root -> left = dfs(root -> left, ans);
        root -> right = dfs(root -> right, ans);
        
        if(arr[root -> val]) {
            if(root -> left)
                ans.emplace_back(root -> left);
            if(root -> right)
                ans.emplace_back(root -> right);
            root = NULL;
        }
        return root;
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(auto i: to_delete)
            arr[i]++;
        
        vector<TreeNode*> ans;
        root = dfs(root, ans);
        if(root)
            ans.emplace_back(root);
        return ans;
    }
};
