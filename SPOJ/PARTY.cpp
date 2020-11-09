#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;

void maxFun(vector<int> &fee, vector<int> &fun, int budget, int numberOfParties) {
    
    vector< vector<int>> dp(numberOfParties + 1, vector<int>(budget + 1));
    int amountPayed = budget, funcal =0;
    for(int i = 0; i < numberOfParties + 1; i++) {
        for(int j = 0; j < budget + 1; j++) {
            if(i == 0 || j == 0) dp[i][j] = 0;
            else if(fee[i - 1] > j) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(fun[i - 1] + dp[i - 1][j - fee[i - 1]], dp[i - 1][j]);
            }
        }
    }
    for(int i = 0; i < budget + 1; i++) {
        if(dp[numberOfParties][i] == dp[numberOfParties][budget]) {
            cout << i << " ";
            break;
        }
    }
    cout << dp[numberOfParties][budget] << endl;
    // debug...
    // for(int i = 0; i < numberOfParties + 1; i++) {
    //     for(int j = 0; j < budget + 1 ; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

void solve()
{
    int budget, numberOfParties;
    string s;
    while(true) {
        cin >> budget >> numberOfParties;
        if(budget == 0 && numberOfParties == 0) break;
        vector<int> fee(numberOfParties), fun(numberOfParties);
        for(int i = 0; i< numberOfParties; i++) 
            cin >> fee[i] >> fun[i];
        maxFun(fee, fun, budget, numberOfParties);
        getline(cin, s);
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
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

