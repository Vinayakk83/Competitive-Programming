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
    vector<int> arr(n);
    map<int, int>lhs, rhs;
    for(int i = 0; i < n; i++)
    	cin >> arr[i];
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n; j++) {
    		for(int k = 0; k < n; k++) {
    			lhs[arr[i] * arr[j] + arr[k]]++;
    			if(arr[i] != 0)
    				rhs[arr[i] * (arr[j] + arr[k])]++;
    		}
    	}
    }
    ll ans = 0;
    for(auto i: lhs) {
    	ans += i.second * rhs[i.first];
    }
    cout << ans << "\n";
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
