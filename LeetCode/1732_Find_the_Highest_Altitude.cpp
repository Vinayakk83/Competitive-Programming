class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefix(gain.size() + 1);
        for(int i = 0; i < gain.size(); i++) {
            prefix[i + 1] = prefix[i] + gain[i];
        }
        return *max_element(prefix.begin(), prefix.end());
    }
};
