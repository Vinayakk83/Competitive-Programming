class Solution {
public:
    const int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string symbol[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string intToRoman(int num) {
        string ans = "";
        for(int i = 0; num; i++) {
            while(num >= val[i]) {
                ans += symbol[i];
                num -= val[i];
            }
        }
        return ans;
    }
};
