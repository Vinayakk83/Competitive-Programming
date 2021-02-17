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
    
    int maxLevelSum(TreeNode* root) {
        
        int level = 0;
        int maxVal = INT_MIN;
        
        queue<TreeNode*> q;
        q.push(root);
        int i = 0;
        while(!q.empty())
        {
            i++;
            int n = q.size();
            int sum = 0;
            while(n--) {
                if(q.front() -> left)
                    q.push(q.front() -> left);
                if(q.front() -> right)
                    q.push(q.front() -> right);
                sum += q.front() -> val;
                q.pop();
            }
            if(maxVal < sum) {
                maxVal = sum;
                level = i;
            }
        }
        return level; 
    }
};
