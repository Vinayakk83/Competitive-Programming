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

ll arr[maxn];
ll ans[maxn];

void solve()
{
    ll n;
    bool flag=false;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        ans[i]=1;
    }
    int k,count,countmax=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=2*i;j<=n;j+=i)
        {
            if(arr[i]<arr[j])
            {
                ans[j]=max(ans[j],ans[i]+1);
            }
        }
    }
    cout << *max_element(ans,ans+n+1) << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    //sieve();
    ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
