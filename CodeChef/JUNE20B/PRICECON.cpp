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
    int n,k,x,sum=0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x>k)
        {
            sum+=(x-k);
        }
    }
    cout << sum << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}