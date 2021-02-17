class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> answer(n);
        
        int count = n;
        for(int i = 0; i < n; i++, count++) {
            if(s[i] == c)
                count = 0;
            answer[i] = count;
        }
        
        count = n;
        for(int i = n - 1; i >= 0; i--, count++) {
            if(s[i] == c)
                count = 0;
            answer[i] = min(answer[i], count);
        }
        
        return answer;
    }
};
