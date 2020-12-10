#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

ll countBits(ll n) {
	ll count = 0;
	while(n > 0) {
		count += (n & 1);
		n >>= 1;
	}
	return count;
}

ll recfunc(ll topicsTaken, ll n, vector<vector<ll>> &arr, vector<ll> &dp) {
	ll count = countBits(topicsTaken);
	if(count >= n) {
		if(topicsTaken != (1 << n) - 1)
			return 0;
		return 1;
	}
	if(dp[topicsTaken] != -1)
		return dp[topicsTaken];
	ll ans = 0;
	for(int i = 0; i < n; i++) {
		if(arr[count][i] == 0 || topicsTaken & (1 << i))
			continue;
		ans += recfunc(topicsTaken | (1 << i), n, arr, dp);
	}
	return dp[topicsTaken] = ans;
}

void solve() {
	ll n;
	cin >> n;
	vector<vector<ll>> arr(n, vector<ll> (n, 0));
	vector<ll> dp(1 << n, -1);
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++)
    		cin >> arr[i][j];
    }
    cout << recfunc(0, n, arr, dp) << endl;
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
