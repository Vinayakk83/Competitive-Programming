#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll ,ll> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxn 1000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{ 
    ull n;
    cin >> n;
    while(n%2==0)
    {
        n=n>>1;
    }
    cout << (n>>1) << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}