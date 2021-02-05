class Solution {
public:
    string getSmallestString(int n, int k) {
        string str = "";
        int x = n;
        while(x--)
            str += 'a';
        k -= n;
        n--;
        while(k) {
            int x = min(k, 25);
            str[n] = 'a' + x;
            k -= x;
            n--;
        }
        return str;
    }
};
