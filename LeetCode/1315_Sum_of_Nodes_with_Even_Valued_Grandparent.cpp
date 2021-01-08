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
    int sumEvenGrandparent(TreeNode* root) {
        
        int sum = 0;
        stack<TreeNode*> s;
        stack<int> parent, grandparent;
        TreeNode* node;
        s.push(root);
        parent.push(0);
        grandparent.push(0);
        int p, gp;
        
        while(!s.empty()) {
            node = s.top();
            s.pop();
            p = parent.top();
            parent.pop();
            gp =grandparent.top();
            grandparent.pop();
            
            if(gp && !(gp & 1))
                sum += node -> val;
            
            if(node -> left) {
                s.push(node -> left);
                parent.push(node -> val);
                grandparent.push(p);
            }
            
            if(node -> right) {
                s.push(node -> right);
                parent.push(node -> val);
                grandparent.push(p);
            }
        }
        return sum;
    }
};
