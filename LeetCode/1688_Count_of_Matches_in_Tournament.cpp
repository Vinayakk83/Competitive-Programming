class Solution {
public:
    int numberOfMatches(int n) {
        int answer = 0;
        while(n != 1) {
            answer += n / 2;
            n = (n + 1) / 2;
        }
        return answer;
    }
};
