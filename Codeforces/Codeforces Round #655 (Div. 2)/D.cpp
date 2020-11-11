#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N=1e6+1;

void solve()
{ 
    int n;
    cin >> n;
    vector<int>a(n);
    int m=(n+1)>>1;
    int j=0,k=m;
    for(int i=0;i<n;i++)
        if(i&1)cin >> a[k++];
        else cin >> a[j++];
    ll sum=0;
    for(int i=0;i<m;i++)sum+=a[i];
    ll ans=sum;
    for(int i=0;i<n;i++)
    {
        sum += a[(m+i)%n];
        sum -= a[i%n];
        ans = max(ans,sum);
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
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
