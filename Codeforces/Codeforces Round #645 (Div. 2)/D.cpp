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
    ll n,x;
    cin >> n >> x;
    ll arr[2*n+1],b[2*n+1],c[2*n+1];
    arr[0]=b[0]=c[0]=0;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
        arr[n+i]=arr[i];
    }
    for(ll i=1;i<=2*n;i++)
    {
        b[i]=b[i-1]+arr[i];
        c[i]=c[i-1]+((arr[i]*(arr[i]+1))/2);
    }
    ll ans=0;
    for (ll i=2*n;i>=n+1;i--)
    {
        ll l=1,r=i,num=i;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(b[i]-b[mid]<x)
            {
                num=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        ll temp=b[i]-b[num-1]-x;
        ll sum=c[i]-c[num-1];
        sum-=((temp*(temp+1))/2);
        ans=max(ans,sum);
    }
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
    fast;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
