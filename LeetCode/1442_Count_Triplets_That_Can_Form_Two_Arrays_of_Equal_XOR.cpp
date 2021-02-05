class Solution {
public:
    int countTriplets(vector<int>& arr) {
        
        int n = arr.size();
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            int x = arr[i];
            for(int j = i + 1; j < n; j++) {
                x ^= arr[j];
                if(x == 0)
                    count += j - i;
            }
        }
        
        return count;
    }
};
