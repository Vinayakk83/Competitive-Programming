class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int depth = 0;
        for(auto i: s) {
            if(i == '(')
                count++;
            else if(i == ')') {
                depth = max(depth, count);
                count--;
            }
        }
        return depth;
    }
};
