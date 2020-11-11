#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 200005
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,k;
int a[maxN];

int check(int x,int place)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(!place)
        {
            count++;
            place^=1;
        }
        else
        {
            if(a[i]<=x)
            {
                count++;
                place^=1;
            }
        }
    }
    return count>=k;
}

void solve()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)cin >> a[i];
    int l=1,r=1e9;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid,0)||check(mid,1))
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << l;
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
    return 0;
}
