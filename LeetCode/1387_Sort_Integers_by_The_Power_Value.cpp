class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> v;
        
        for(int i = lo; i <= hi; i++) {
            int count = 0;
            int n = i;
            while(n != 1) {
                if(n&1)
                    n = 3 * n + 1;
                else
                    n = n / 2;
                count++;
            }
            v.push_back({count, i});
        }
        sort(v.begin(), v.end());
        
        return v[k - 1].second;
    }
};
