class Solution {
public:
    int soldiersCount(vector<int> &row) {
        int l = 0, r = row.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(row[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return l;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> krows;
        vector<pair<int, int>> sc;
        for(int i = 0; i < mat.size(); i++) {
            sc.push_back(make_pair(soldiersCount(mat[i]), i));
        }
        sort(sc.begin(), sc.end());
        for(int i = 0; i < k; i++)
            krows.push_back(sc[i].second);
        return krows;
    }
};
