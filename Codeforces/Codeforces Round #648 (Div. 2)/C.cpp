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

const int N=2e5+1;
int n;
int a[N],b[N],c[N];

void solve()
{
    cin >> n;
    map< int,int > count;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        c[a[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    int num;
    for(int i=0;i<n;i++)
    {
        num=c[b[i]]-i-1;
        if(num<0)
        {
            num+=n;
        }
        count[num]++;
    }
    int ans = 0;
	for(auto &it:count)
		ans = max(ans, it.second);
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
