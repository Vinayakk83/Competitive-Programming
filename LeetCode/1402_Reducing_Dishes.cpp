class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(), satisfaction.end());
        int sum = 0, i;
        for(i = satisfaction.size() - 1; i >= 0; i--) {
            if(sum + satisfaction[i] < 0) break;
            sum += satisfaction[i];
        }
        sum = 0;
        for(int j = i + 1, k = 1; j < satisfaction.size(); j++, k++) {
            sum += (satisfaction[j] * k);
        }
        return sum;
    }
};
