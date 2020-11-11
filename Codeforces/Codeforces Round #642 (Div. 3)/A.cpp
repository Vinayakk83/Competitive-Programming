#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,m;
    cin >> n >> m;
    if(n==1)
    {
        cout << "0" <<endl;
    }
    else if (n==2)
    {
        cout << m << endl;
    }
    else
    {
        cout << 2*m << endl;
    }
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
