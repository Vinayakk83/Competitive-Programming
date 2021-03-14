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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            int qsize = q.size();
            double  sum = 0;
            for(int i = 0; i < qsize; i++) {
                sum += q.front() -> val;
                if(q.front() -> left)
                    q.push(q.front() -> left);
                if(q.front() -> right)
                    q.push(q.front() -> right);
                q.pop();
            }
            ans.push_back(sum / qsize);
        }
        return ans;
    }
};
