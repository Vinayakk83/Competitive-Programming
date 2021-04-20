class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, c;
        if(n == 0)
            return 0;
        else if(n == 1)
            return 1;
        else {
            for(int i = 2; i <= n; i++) {
                c = b;
                b += a;
                a = c;
            }
            return b;
        }
    }
};
