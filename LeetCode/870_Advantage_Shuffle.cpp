class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> temp = B;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        map<int, vector<int>> mp;
        int i = 0, j = 0, n = A.size();
        while(i < n) {
            if(A[i] > B[j]) {
                mp[B[j++]].push_back(A[i]);
                A[i] = -1;
            }
            i++;
        }
        
        for(auto num: A)
            if(num != -1) mp[B[j++]].push_back(num);
        
        i = 0;
        vector<int> ans(n);
        for(auto num: temp) {
            ans[i++] = mp[num].back();
            mp[num].pop_back();
        }
        
        return ans;
    }
};
