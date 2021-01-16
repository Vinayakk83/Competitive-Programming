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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int answer = 0;
        stack<TreeNode*> s;
        TreeNode* node;
        s.push(root);
        
        while(!s.empty()) {
            node = s.top();
            s.pop();
            
            if(node -> val >= low && node -> val <= high)
                answer += node -> val;
            if(node -> left) {
                s.push(node -> left);
            }
            if(node -> right) {
                s.push(node -> right);
            }
        }
        return answer;
    }
};
