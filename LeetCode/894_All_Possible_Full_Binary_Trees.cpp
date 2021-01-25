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
    map<int, vector<TreeNode*>> memo;
    
    vector<TreeNode*> allPossibleFBT(int N) {
        vector<TreeNode*> temp;
        
        if(!(N & 1))
            return temp;
        
        memo[0] = {};
        memo[1] = {new TreeNode()};
        
        if(memo.count(N) >= 1)
            return memo[N];
        
        for(int i = 0; i < N; i++) {
            for(auto left: allPossibleFBT(N - 1 - i)) {
                for(auto right: allPossibleFBT(i)) {
                    TreeNode* curr = new TreeNode(0, left, right);
                    temp.push_back(curr);
                }
            }
        }
        return memo[N] = temp;
    }
};
