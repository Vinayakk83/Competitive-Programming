class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        
        set<string> foodItems;
        map<int, map<string, int>> rows;
        
        for(int i = 0; i < orders.size(); i++) {
            foodItems.insert(orders[i][2]);
            rows[stoi(orders[i][1])][orders[i][2]]++;
        }
        
        vector<vector<string>> ans;
        vector<string> a;
        
        a.emplace_back("Table");
        for(auto i: foodItems)
            a.emplace_back(i);
        
        ans.emplace_back(a);
        
        for(auto i: rows) {
            vector<string> temp;
            temp.emplace_back(to_string(i.first));
            
            for(int j = 1; j < a.size(); j++) {
                if(rows[i.first].count(a[j]) > 0)
                    temp.emplace_back(to_string(rows[i.first][a[j]]));
                else
                    temp.emplace_back("0");
            }
            ans.emplace_back(temp);
        }
        
        return ans;;
    }
};
