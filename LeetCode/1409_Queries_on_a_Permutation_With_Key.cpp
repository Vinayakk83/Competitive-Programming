class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> position, arr(m);
        for(int i = 0; i < m; i++)
            arr[i] = i + 1;
        for(int i: queries) {
            int p = find(arr.begin(), arr.end(), i) - arr.begin();
            position.emplace_back(p);
            arr.erase(arr.begin() + p);
            arr.insert(arr.begin(), i);
        }
        return position;
    }
};
