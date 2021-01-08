class Solution {
public:
    int balancedStringSplit(string s) {
        int answer = 0, count = (s[0] == 'L' ? 1: -1);
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == 'L')
                count++;
            else
                count--;
            if(count == 0)
                answer++;
        }
        return answer;
    }
};
