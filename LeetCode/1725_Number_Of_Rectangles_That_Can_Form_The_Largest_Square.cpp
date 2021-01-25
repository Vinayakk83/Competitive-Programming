class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int arr[rectangles.size()];
        int maxLen = -1;
        for(int i = 0; i < rectangles.size(); i++) {
            arr[i] = min(rectangles[i][0], rectangles[i][1]);
            if(maxLen < arr[i])
                maxLen = arr[i];
        }
        int count = 0;
        for(int i = 0; i < rectangles.size(); i++) {
            if(arr[i] == maxLen)
                count++;
        }
        return count;
    }
};
