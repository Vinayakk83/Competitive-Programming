class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum = 0;
        sort(piles.begin(), piles.end());
        for(int i = 0, j = piles.size() - 2; i < j; j -= 2, i++)
            sum += piles[j];
        return sum;
    }
};
