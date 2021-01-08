class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> mp;
        vector<vector<int>> groups;
        for(int i = 0; i < groupSizes.size(); i++)
            mp[groupSizes[i]].push_back(i);
        for(auto i: mp) {
            vector<int> temp;
            while(i.second.size()) {
                int x = i.second.back();
                i.second.pop_back();
                temp.push_back(x);
                if(temp.size() == i.first) {
                    groups.push_back(temp);
                    temp.clear();
                }
            }
            if(temp.size())
                groups.push_back(temp);
        }
        return groups;
    }
};
