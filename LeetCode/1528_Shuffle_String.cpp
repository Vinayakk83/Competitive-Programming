class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for(int i = 0; i < indices.size();)
        {
            if(i != indices[i])
            {
                int j = indices[i];
                swap(indices[i], indices[j]);
                swap(s[i], s[j]);
            }
            else 
                i++;
        }
        return s;
    }
};
