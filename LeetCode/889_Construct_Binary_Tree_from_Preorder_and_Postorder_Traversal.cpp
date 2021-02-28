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
    TreeNode* dfs(vector<int>& pre, int pre_start, int pre_end, vector<int>& post, int post_start, int post_end) {
        if(pre_start > pre_end)
            return NULL;
        
        TreeNode* root = new TreeNode(pre[pre_start]);
        
        if(pre_start == pre_end)
            return root;
        
        int post_index = post_start;
        while(post[post_index] != pre[pre_start + 1]) post_index++;
        
        int len = post_index - post_start + 1;
        
        root -> left = dfs(pre, pre_start + 1, pre_start + len, post, post_start, post_index);
        root -> right = dfs(pre, pre_start + len + 1, pre_end, post, post_index + 1, post_end - 1);
        
        return root;
    }
    
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        return dfs(pre, 0, pre.size() - 1, post, 0, post.size() - 1);
    }
};
