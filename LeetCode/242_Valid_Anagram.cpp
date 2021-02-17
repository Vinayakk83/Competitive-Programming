class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()) {
            int arr[26] = {0};
            for(auto i: s)
                arr[i - 'a']++;
            for(auto i: t)
                arr[i - 'a']--;
            for(auto i: arr)
                if(i != 0)
                    return false;
            return true;
        }
        else
            return false;
    }
};
