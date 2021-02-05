class Solution {
public:
    int concatenatedBinary(int n) {
        int decimalValue = 1, numberOfBits;
        for(int i = 2; i <= n; i++) {
            numberOfBits = log2(i) + 1;
            decimalValue = (((1LL * decimalValue) << numberOfBits) + i) % 1000000007;   
        }
        return decimalValue;
    }
};
