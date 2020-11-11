#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N=1e6+1;

void solve()
{ 
    int n;
    cin >> n;
    vector<int>a(n),b,c;
    for(int i=0;i<n;i++)cin >> a[i];
    ll sum=0;
    for(int i=0;i<n;i+=2)sum+=a[i];
    for(int i=1;i<n;i+=2)b.emplace_back(a[i]-a[i-1]);
    for(int i=1;i<n-1;i+=2)c.emplace_back(a[i]-a[i+1]);
    ll mx=0,val=0;
    // for(int i=0;i<b.size();i++)cout << b[i] << " ";
    // cout << endl;
    // for(int i=0;i<c.size();i++)cout << c[i] << " ";
    // cout << endl;
    for(int i=0;i<b.size();i++)
    {
        val+=b[i];
        mx=max(mx,val);
        if(val<0)val=0;
    }
    val=0;
    for(int i=0;i<c.size();i++)
    {
        val+=c[i];
        mx=max(mx,val);
        if(val<0)val=0;
    }
    cout << mx+sum << endl;
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
