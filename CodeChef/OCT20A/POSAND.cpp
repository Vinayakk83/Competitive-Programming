#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

void solve() {
	int n;
	cin >> n;
	if(n == 1) {
		printf("1 \n");
		return;
	}
	if(n && (! (n & (n - 1)))) printf("-1 \n");
	else {
		int bits = log2(n);
		ll maxnum = pow(2, bits), num = 4;
		for(int i = 2; i < maxnum; i++) {
			if(i == num){
				printf("%d %d ", i + 1, i);
				i++;
				num *= 2;
			}
			else printf("%d ", i);
		}
		printf("1 %d %d ", maxnum + 1, maxnum);
		for(int i = maxnum + 2; i <= n; i++) printf("%d ", i);
		printf("\n");
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	swift;
	int t;
	cin >> t;
	// t = 1;
	while(t--) {
		solve();
	}
	return 0;
}