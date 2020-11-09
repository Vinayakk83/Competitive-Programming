#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;

ll maxAmount(ll n){
    if(n < 12) return n;
    return maxAmount(n/2) + maxAmount(n/3) +maxAmount(n/4);
}

void solve()
{
    ll n;
    while(cin >> n)cout << maxAmount(n) << endl;
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

