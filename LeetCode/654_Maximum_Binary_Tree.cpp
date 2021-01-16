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
    TreeNode* binaryTree(vector<int> &nums, int l, int r) {

        if(l >= r) 
            return nullptr;        
        
        int idx = -1, maxElement = INT_MIN;
        for(int i = l; i < r; i++)
            if(nums[i] > maxElement) {
                idx = i;
                maxElement = nums[i];
            }
        
        TreeNode* node = new TreeNode(maxElement);
        node -> left = binaryTree(nums, l, idx);
        node -> right = binaryTree(nums, idx + 1, r);
        return node;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* head = binaryTree(nums, 0, nums.size());
        return head;
    }
};
