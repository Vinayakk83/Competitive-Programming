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
    while(1) {
    	cin >> n;
    	if(!n) break;
	    ll arr[n];
	    stack<ll> s;
	    for(int i = 0; i < n; i++)
	    	cin >> arr[i];
	    s.push(0);
	    ll num, ans = 0;
	    for(int i = 1; i < n; i++) {
	    	while(!s.empty() && arr[s.top()] > arr[i]) {
	    		num = s.top();
	    		s.pop();
	    		if(s.empty()) {
		    		ans = max(ans, arr[num] * i);
		    	}
		    	else {
		    		ans = max(ans, arr[num] * (i - s.top() - 1));
		    	}
	    	}
	    	if(!s.empty() && arr[s.top()] == arr[i])
	    		s.pop();
	    	s.push(i);
	    }
	    while(!s.empty() && arr[s.top()] > -1){
	    	num = s.top();
    		s.pop();
    		if(s.empty()) {
    			ans = max(ans, arr[num] * n);
	    	}
	    	else {
	    		ans = max(ans, arr[num] * (n - s.top() - 1));
	    	}
	    }
	    cout << ans << "\n";
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
    // cin >> t;
    t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
