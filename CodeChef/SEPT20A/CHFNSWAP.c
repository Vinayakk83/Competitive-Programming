#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
    	unsigned long long int n, sum;
        scanf("%llu", &n);
        sum = n * (n + 1) / 2;
        if(sum & 1) {
            printf("0\n");
        }
        else {
            unsigned long long int divSum, l = 1, r = n, mid, s, x = 0;
            divSum = sum / 2;
            while(l < r) {
                mid = l + (r - l) / 2;
                s = mid * (mid + 1) / 2;
                if(divSum > sum - s) r = mid;
                else l = mid + 1;
            }
            if(l * (l - 1) / 2 == divSum) {
                x += (l - 1) * (l - 2) / 2;
                x += (n - l) * (n - l + 1) / 2;
            }
            printf("%llu\n", n - l + 1 + x);
        }
    }
	return 0;
}

