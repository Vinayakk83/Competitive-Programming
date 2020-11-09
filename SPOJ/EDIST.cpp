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
    string A, B;
    cin >> A;
    cin >> B;
    int ALength = A.size();
    int BLength = B.size();
    // cout << ALength << " " << BLength << endl; 
    vector<vector<int>>dp(ALength + 1 , vector<int>(BLength + 1));
    for(int i = 0; i <= ALength; i++) {
        dp[i][0] = i;
    }
    for(int i = 0; i <= BLength; i++) {
        dp[0][i] = i;
    }
    for(int i = 1;i <= ALength; i++) {
        for(int j = 1;j <= BLength; j++) {
            dp[i][j] = min(min(dp[i][j - 1], dp[i - 1][j]) + 1, dp[i - 1][j - 1] + (A[i-1] == B[j-1] ? 0 : 1));
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cout << dp[ALength][BLength] << endl;
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

