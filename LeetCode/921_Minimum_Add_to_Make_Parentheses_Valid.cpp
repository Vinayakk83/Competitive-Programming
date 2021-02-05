class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> s;
        for(auto i: S) {
            if(s.empty()) {
                s.push(i);
                continue;
            }
            if(i == '(')
                s.push(i);
            else {
                if(s.top() == '(')
                    s.pop();
                else
                    s.push(i);
            }
        }
        return s.size();
    }
};
