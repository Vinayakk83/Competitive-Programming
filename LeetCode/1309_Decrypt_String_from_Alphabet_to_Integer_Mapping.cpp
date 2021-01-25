class Solution {
public:
    string freqAlphabets(string s) {
        int i = s.length() - 1;
        string str = "", temp;
        while(i >= 0) {
            int x;
            temp = "";
            if(s[i] == '#')
            {
                temp += s[i - 2];
                temp += s[i - 1];
                x = stoi(temp);
                i -= 3;
            }
            else
            {
                temp += s[i];
                x = stoi(temp);
                i--;
            }
            str += ('a' + x - 1);
        }
        reverse(str.begin(), str.end());
        
        return str;
    }
};
