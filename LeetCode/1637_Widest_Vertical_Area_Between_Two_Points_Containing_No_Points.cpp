class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xCoordinates;
        int ans = 0;
        for(auto i: points)
            xCoordinates.emplace_back(i[0]);
        sort(xCoordinates.begin(), xCoordinates.end());
        for(int i = 1; i < xCoordinates.size(); i++) {
            ans = max(ans, xCoordinates[i] - xCoordinates[i - 1]);
        }
        return ans;
    }
};
