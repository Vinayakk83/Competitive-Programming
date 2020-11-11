#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    ull ans=0,j=1;
    for(ll i=1;i<=ceil(n/2);i++)
    {
        ans+=(((j*2)+(j+2)*2)*i);
        //cout<< ans << " ";
        j+=2;
    }
    cout << ans << endl;
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
