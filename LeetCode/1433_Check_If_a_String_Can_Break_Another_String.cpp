class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int n = s1.length();
        int i = 0, s1_count = 0, s2_count = 0;
        while(i < n) {
            if(s1[i] >= s2[i])
                s1_count++;
            if(s2[i] >= s1[i])
                s2_count++;
            i++;
        }
        if(s1_count == n || s2_count == n)
            return true;
        return false;
    }
};
