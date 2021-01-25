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
    
    void inorder(vector<int>& arr, TreeNode* root) {
        if(!root)
            return;
        inorder(arr, root -> left);
        arr.push_back(root -> val);
        inorder(arr, root -> right);
    }
    
    TreeNode* balanced(vector<int>& arr, int l, int r) {
        if(l > r)
            return NULL;
        int mid = l + (r - l) / 2;
        TreeNode* root = new TreeNode(arr[mid]);
        root -> left = balanced(arr, l, mid - 1);
        root -> right = balanced(arr, mid + 1, r);
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(arr, root);
        TreeNode* head = balanced(arr, 0, arr.size() - 1);
        return head;
    }
};
