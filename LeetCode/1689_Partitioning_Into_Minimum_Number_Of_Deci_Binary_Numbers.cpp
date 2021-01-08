class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(int i = 0; n[i]; i++)
        {
            if(n[i] - char(48) > ans)
                ans = n[i] - char(48);
        }
        return ans;
    }
};
