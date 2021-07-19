class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for(int i = 1; i < n; i++) {
            ans += '@';
            string temp = "";
            int j = 1, count = 1;
            char prev = ans[0];
            while(j < ans.length()) {
                if(prev == ans[j]) {
                    count++;
                }
                else {
                    temp += to_string(count);
                    temp += prev;
                    count = 1;
                    prev = ans[j];
                }
                j++;
            }
            ans = temp;
        }
        return ans;
    }
};
