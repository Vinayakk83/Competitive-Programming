class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.length();
        vector<int> ans(n);
        int x = 0, y = 0;
        for(int i = 1; i < n; i++) {
            if(boxes[i - 1] == '1') x++;
            y += x;
            ans[i] += y;
        }
        x = 0, y = 0;
        for(int i = n - 2; i >= 0; i--) {
            if(boxes[i + 1] == '1') x++;
            y += x;
            ans[i] += y;
        }
        return ans;
    }
};
