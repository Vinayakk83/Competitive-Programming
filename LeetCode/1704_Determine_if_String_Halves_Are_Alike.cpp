class Solution {
public:
    bool halvesAreAlike(string s) {
        set<int> v {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int aCount = 0, bCount = 0;
        for(int i = 0; i < s.length(); i++) {
            if(v.find(s[i]) != v.end())
                if(i < s.length() / 2)
                    aCount++;
                else
                    bCount++;
        }
        return aCount == bCount ? true: false;
    }
};
