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

//int arr[maxn];

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    cout << min(n/k,m)-(m-min(n/k,m)+k-2)/(k-1) << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
