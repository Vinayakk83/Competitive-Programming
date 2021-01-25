class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for(char i: s) {
            if(i == '(' || i == '{' || i == '[')
                parentheses.push(i);
            else {
                if(parentheses.empty())
                    return false;
                else {
                    if((i == ')' && parentheses.top() == '(') || (i == ']' && parentheses.top() == '[') || (i == '}' && parentheses.top() == '{'))
                        parentheses.pop();
                    else
                        return false;
                }
            }
        }
        if(parentheses.empty())
            return true;
        else
            return false;
    }
};
