#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a,b,l,r,x;
    cin>>a>>b>>l>>r;
    x=a|b;
    if(a==0 || b==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
}

int main()
{
    fast;
    /*  #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif  */
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}