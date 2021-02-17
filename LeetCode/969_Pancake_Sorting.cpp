class Solution {
public:
    
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        for(int i = arr.size(); i > 1; i--) {
            auto it = find(arr.begin(), arr.end(), i);
            int index = it - arr.begin();
            
            if(index == i - 1) continue;
            
            if(index != 0)
                ans.emplace_back(index + 1);
            ans.emplace_back(i);
            
            reverse(arr.begin(), arr.begin() + index + 1);
            reverse(arr.begin(), arr.begin() + i);
        }
        return ans;
    }
};


/*

3 2 4 1

for k = 3;
    4 2 3 1
for k = 4
    1 3 2 4
for k = 2
    3 1 2 4
for k = 3
    2 1 3 4
for k = 2
    1 2 3 4


*/
