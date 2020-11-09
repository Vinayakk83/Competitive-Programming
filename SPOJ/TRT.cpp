#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;

int maxRevenue(vector< vector<int>> &dp, vector<int> &arr, int l, int r, int age){
    if(l > r) return 0;
    if(dp[l][r] != -1) return dp[l][r];
    if(l == r) dp[l][r] = age * arr[l];
    else {
        int choice1 = age * arr[l] + maxRevenue(dp, arr, l + 1, r, age + 1);
        int choice2 = age * arr[r] + maxRevenue(dp, arr, l, r - 1, age + 1);
        dp[l][r] = max(choice1, choice2);
    }
    return dp[l][r];
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector< vector<int>>dp(n + 1, vector<int>(n + 1, -1));
    for( int i = 0; i < n; i++) cin >> arr[i];
    cout << maxRevenue(dp, arr, 0, n - 1, 1) << endl;
    // debug...
    // for(int i = 0; i < n + 1; i++) {
    //     for(int j = 0; j < n + 1; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

