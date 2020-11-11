#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll ,ll> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxn 1000001
#define PI 3.14159265
#define INF 1000000009
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

void solve()
{
    int n;
    cin >> n;
    int a[n+1],b[n+1],vis[n+1];
    memset(a,0,sizeof(a));
    memset(b,-1,sizeof(b));
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]<a[i])
        {
            b[i]=a[i-1];
            vis[b[i]]=1;
        }
    }
    vis[a[n]]=1;
    int m=0;
    for(int i=1;i<=n;i++)
    {
        while(vis[m])
        {
            m++;
        }
        if(b[i]==-1)
        {
            b[i]=m;
            vis[m]=1;
        }
        cout << b[i] << " ";
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
    //cin >> t;
    t=1;
    while(t--)
    {
        solve();
    }
}
