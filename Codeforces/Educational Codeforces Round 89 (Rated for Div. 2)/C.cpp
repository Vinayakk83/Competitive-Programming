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
    int n,m,x;
    cin >> n >> m;
    //vector< vector< int > >vec(n,vector< int >(m,0));
    vector<int>a(n+m+1,0),b(n+m+1,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            //cin >> vec[i][j];
            cin >> x;
            if(x==1)
            {
                a[i+j]++;
            }
            else
            {
                b[i+j]++;
            }
        }
    }
    // for(int i=2;i<n+m+1;i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for(int i=2;i<n+m+1;i++)
    // {
    //     cout << b[i] << " ";
    // }
    //cout << endl;
    int ans=0;
    for(int i=2;i<=(n+m+1)/2;i++)
    {
        ans+=min(a[i]+a[n+m+2-i],b[i]+b[n+m+2-i]);
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
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
