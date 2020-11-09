
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6;
ll n, k;

ll pentagonal(ll x)
{
    return (x*(3*x - 1))/2;
}

ll comb(ll r)
{
    return (r&(n-1))? 0: 1;
}

void solve() {
    cin >> n >> k;
    if(n == 0 && k == 0) {
		cout << "0\n";
		return;
	}
	ll ans = 0;
    for(ll i = 1; ; i++)
    {
        ll den = k - pentagonal(i) - i;
		if(den < 0)
            break;
        ll temp = comb(den);
        ans = (ans ^ temp);
    }
    for(ll i = 1; ; i++)
    {
        ll den = k - pentagonal(i);
        if(den < 0)
            break;
        ll temp = comb(den);
        ans = (ans ^ temp);
    }
    ans = (ans ^ comb(k));
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
    cin >> t;
    // t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
