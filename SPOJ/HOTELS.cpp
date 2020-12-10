#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
    	cin >> arr[i];
    ll sum = 0, maxSum = 0;
    int l = 0, r = 0;
    while(l < n && r < n) {
    	if(sum + arr[r] <= m) {
    		sum += arr[r];
    		maxSum = max(maxSum, sum);
    		r++;
    	}
    	else {
    		sum -= arr[l];
    		l++;
    	}
    }
    cout << maxSum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    // cin >> t;
    t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
