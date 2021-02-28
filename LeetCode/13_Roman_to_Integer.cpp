class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman[' '] = 0;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        char max_roman = ' ';
        int ans = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(roman[s[i]] < roman[max_roman]) {
                ans -= roman[s[i]];
            }
            else {
                max_roman = s[i];
                ans += roman[s[i]];
            }
        }
        return ans;
    }
};
