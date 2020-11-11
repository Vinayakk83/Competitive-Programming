#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;

void solve()
{
    ll l,r,m;
    cin >> l >> r >> m;
    ll diff=r-l;
    ll curr=l;
    while(curr<=r)
    {
        ll num=(m+curr-1)/curr;
        if(num*curr-m<=diff)
        {
            cout << curr << " " << r-(num*curr-m) << " " << r << endl;
            return;
        }
        if(num!=1)
        {
            num--;
            if(m-num*curr<=diff)
            {
                cout << curr << " " << r << " " << r-(m-num*curr) << endl;
                return;
            }
        }
        curr++;
    }

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
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
