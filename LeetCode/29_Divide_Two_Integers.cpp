class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        long long int answer = 0, sign = 1;
        if((dividend < 0 && divisor > 0) || (divisor < 0 && dividend > 0)) sign = -1;
        long long int num = abs(dividend), den = abs(divisor);
        while(num >= den) {
            long long int temp = den, m = 1;
            while(num >= (temp << 1)) {
                temp <<= 1;
                m <<= 1;
            }
            num -= temp;
            answer += m;
        }
        return sign * answer;
    }
};
