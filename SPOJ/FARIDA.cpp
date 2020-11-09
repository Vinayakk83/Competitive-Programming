#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;


void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n), dp(n + 1);
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(n > 0) dp[1] = arr[0];
    for(int i = 2; i < n + 1; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i - 1]);
    }
    // debug...
    // for(ll i : dp)cout << i << " ";
    // cout << endl;
    cout << dp[n] << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    cin>>t;
    // t=1;
    for(int i = 1; i <= t; i++)
    {
        cout << "Case "<< i << ": ";
        solve();
    }
    return 0;
}

