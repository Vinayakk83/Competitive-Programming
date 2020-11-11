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
    int n,k;
    cin >> n >> k;
    int num=n;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i<=k)
            {
                num=min(num,n/i);
            }
            if(n/i<=k)
            {
                num=min(num,i);
            }
        }
    }
    cout << num << endl;
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
