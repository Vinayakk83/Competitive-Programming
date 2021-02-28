class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp = "";
        int open = 0;
        for(auto i: s) {
            if(i == '(')
                open++;
            else if(i == ')') {
                if(open == 0) continue;
                open--;
            }
            temp += i;
        }
        
        string ans = "";
        for(int i = temp.length() - 1; i >= 0; i--) {
            if(temp[i] == '(' && open-- > 0) continue;
            ans += temp[i];
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
