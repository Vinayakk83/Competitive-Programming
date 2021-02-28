class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length(), n2 = word2.length();
        string s = "";
        int i = 0;
        while(i < n1 && i < n2) {
            s += word1[i];
            s += word2[i];
            i++;
        }
        while(i < n1) {
            s += word1[i];
            i++;
        }
        while(i < n2) {
            s += word2[i];
            i++;
        }
        return s;
    }
};
