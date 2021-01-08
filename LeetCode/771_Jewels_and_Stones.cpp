class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> LETTERS(26), letters(26);
        int count = 0;
        for(char i: stones) {
            if(i < 'a')
                LETTERS[i - 'A']++;
            else
                letters[i - 'a']++;
        }
        for(char i: jewels) {
            if(i < 'a')
                count += LETTERS[i - 'A'];
            else
                count += letters[i - 'a'];
        }
        return count;
    }
};
