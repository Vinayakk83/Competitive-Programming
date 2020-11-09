#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
const int N=1e6+1;
 
// output:-
 
// -1
// 5
 
void solve()
{ 
    int n,k;
    cin >> n >> k;
    vector<int>p(k+1);
    for(int i=1;i<=k;i++)
    {
        cin >> p[i];
    }
    vector<int>dp(k+1);
    for(int i=1;i<=k;i++)dp[i]=p[i];
    for(int i=2;i<=k;i++)
        for(int j=1;j<i;j++)
        {
            if(p[i-j]==-1||dp[j]==-1)continue;
            if(dp[i]==-1)dp[i]=dp[j]+p[i-j];
            else dp[i]=min(dp[i],dp[j]+p[i-j]);
        }
    cout << dp[k] << endl;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
    return 0;
} 
