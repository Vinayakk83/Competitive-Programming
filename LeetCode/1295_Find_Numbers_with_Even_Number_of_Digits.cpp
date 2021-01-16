class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int numberCount = 0;
        for(int i: nums){
            int x = i, digitCount = 0;
            while(x) {
                x /= 10;
                digitCount++;
            }
            if(!(digitCount&1))
                numberCount++;
        }
        return numberCount;
    }
};
