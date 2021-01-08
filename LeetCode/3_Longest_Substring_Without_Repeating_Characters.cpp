class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> characterIndex(256, -1);
        int answer = 0;
        int i = 0;
        for(int j = 0; j < s.length(); j++) {
            i = max(i, characterIndex[s[j]] + 1);
            answer = max(answer, j - i + 1);
            characterIndex[s[j]] = j;
        }
        return answer;
    }
};
