class Solution {
public:
    string removeOuterParentheses(string S) {
        string str = "";
        int check = 0;
        for(int i = 0; i < S.length(); i++) {
            if(S[i] == '(') {
                check++;
                if(check != 1) {
                    str += S[i];
                }
            }
            else {
                check--;
                if(check != 0)
                    str += S[i];   
            }
        }
        return str;
    }
};
