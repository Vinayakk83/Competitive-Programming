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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* node;
        int levelSum = 0;
        q.push(root);
        
        while(!q.empty()) {
            levelSum = 0;
            int queueSize = q.size();
            for(int i = 0; i < queueSize; i++) {
                node = q.front();
                q.pop();
                levelSum += node -> val;
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
            }
        }
        return levelSum;
    }
};
