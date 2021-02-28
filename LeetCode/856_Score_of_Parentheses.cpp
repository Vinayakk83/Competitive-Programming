class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> a;
        int score = 0;
        for(auto i: S) {
            if(i == '(') {
                a.push(score);
                score = 0;
            }
            else {
                score = a.top() + max(2 * score, 1);
                a.pop();
            }
        }
        return score;
    }
};
