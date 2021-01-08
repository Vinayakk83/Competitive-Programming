class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> characters(26);
        for(int i = 0; i < allowed.length(); i++) {
            characters[allowed[i] - 'a']++;
        }
        int count = 0;
        bool flag = true;
        for(int i =0; i < words.size(); i++)
        {
            flag = true;
            for(int j = 0; j < words[i].length(); j++)
            {
                if(!characters[words[i][j] - 'a'])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};
