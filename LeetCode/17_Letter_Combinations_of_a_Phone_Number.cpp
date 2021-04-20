class Solution {
public:
    map<char, string> digit_to_letters = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    
    vector<string> letterCombinations(string digits) {
        queue<string> q;
        q.push("");
        for(auto i: digits) {
            int n = q.size();
            while(n--) {
                string str = q.front();
                q.pop();
                for(auto j: digit_to_letters[i]) {
                    q.push(str + j);
                }
            }
        }
        vector<string> ans;
        while(!q.empty()) {
            if(q.front() == "")
                break;
            ans.emplace_back(q.front());
            q.pop();
        }
        return ans;
    }
};
