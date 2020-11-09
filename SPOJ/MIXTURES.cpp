#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;
ll dp[105][105];

ll cSum(vector<int> &arr, int i, int j) {
    ll sum = 0;
    for(int k = i; k <= j; k++) {
        sum += arr[k];
        sum %= 100;
    }
    return sum;
}

ll minSmoke(vector<int> &arr, int i, int j) {
    if(i == j) return 0;
    else if(dp[i][j] != -1) return dp[i][j];
    else {
        dp[i][j] = 1e12;
        for(int k = i; k < j; k++) 
            dp[i][j] = min(dp[i][j], minSmoke(arr, i, k) + minSmoke(arr, k + 1, j) + (cSum(arr, i, k) * cSum(arr, k + 1, j)));
        return dp[i][j];
    }
}

void solve() {
    int n;
    while(cin >> n) {
        vector<int> arr(n);
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= n; j++) dp[i][j] = -1;
        }
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << minSmoke(arr, 0, n - 1) << endl;
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
