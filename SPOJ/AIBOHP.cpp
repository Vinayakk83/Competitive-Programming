#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;

int checkForInsertion(vector< vector<int>> &dp, string &s,int l, int r) {
    if(l >= r) return 0;
    if(dp[l][r] != -1) return dp[l][r];
    if(s[l] == s[r]) dp[l][r] = checkForInsertion(dp, s, l + 1, r - 1);
    else {
        int c1 = checkForInsertion(dp, s, l, r - 1);
        int c2 = checkForInsertion(dp, s, l + 1, r);
        dp[l][r] = min(c1, c2) + 1;
    }
    return dp[l][r];
}

void solve()
{
    string s;
    cin >> s;
    vector< vector<int>> dp(s.length() + 1, vector<int>(s.length() + 1, -1));
    cout << checkForInsertion(dp, s, 0, s.length() - 1) << endl;
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
    while(t--)
    {
        solve();
    }
    return 0;
}

