#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,s,x;
    cin>>n>>s;
    x=2*n;
    if (x > s)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        x=2*(n-1);
        cout<<"YES"<<endl;
        for(ll i=0;i<n-1;i++)
        {
            cout<<"2 ";
        }
        cout<<s-x<<endl;
        cout<<"1"<<endl;
    }
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    solve();
}
