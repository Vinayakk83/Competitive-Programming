class Solution {
public:
    pair<char, int> digitchar[10] = {{'z', 0}, {'w', 2}, {'u', 4}, {'x', 6}, {'g', 8}, {'o', 1}, {'h', 3}, {'f', 5}, {'s', 7}, {'i', 9}};
    
    vector<string> digits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string originalDigits(string s) {
        int arr[26] = {0}, digit_count[10] = {0};
        for(auto i: s)
            arr[i - 'a']++;
        for(auto i: digitchar) {
            while(arr[i.first - 'a']) {
                digit_count[i.second]++;
                for(auto j: digits[i.second])
                    arr[j - 'a']--;
            }
        }
        string ans = "";
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < digit_count[i]; j++)
                ans += '0' + i;
        }
        return ans;
    }
};
