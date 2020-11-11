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

const int N=2e6+1;
ll dp[N];
void fun()
{
    dp[3]=1;
    for(int i=4;i<N;i++)
    {
        if(i%3==0)dp[i]=1;
        dp[i]+=(dp[i-1]+2*dp[i-2]);
        dp[i]%=modulo;
    }
    // for(int i=1;i<20;i++)
    // cout << dp[i] << endl;
}

void solve()
{ 
    int n;
    cin >> n;
    cout << (4*dp[n])%modulo << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    fun();
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
