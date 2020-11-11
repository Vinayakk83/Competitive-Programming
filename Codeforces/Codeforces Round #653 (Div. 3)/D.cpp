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
// 6
// 18
// 0
// 227
// 8

void solve()
{ 
    int n,k;
    cin >> n >> k;
    vector<int>A(n),a;
    for(int &i:A)cin >> i;
    for(int i=0;i<n;i++)if(A[i]%k!=0)a.emplace_back(k-(A[i]%k));
    ml r;
    ll x=0;
    for(int i=0;i<a.size();i++)
    {
        if(!r[a[i]%k])r[a[i]%k]=a[i]%k;
        else r[a[i]%k]+=k;
        x=max(x,r[a[i]%k]);
    }
    if(x)x++;
    cout << x << endl;
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
    return 0;
}
