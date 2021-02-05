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
    int dfs(TreeNode* root, vector<int>&v) {
        if(!root)
            return 0;
        
        if(root -> left == NULL && root -> right == NULL) {
            int c = 0;
            v[root -> val]++;
            for(auto i: v) {
                if(i&1) c++;
            }
            v[root -> val]--;
            if(c > 1)
                return 0;
            return 1;
        }
        else {
            v[root -> val]++;
            int ans = dfs(root -> left, v) + dfs(root -> right, v);
            v[root -> val]--;
            
            return ans;
        } 
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>v(10);
        
        return dfs(root, v);
    }
};
