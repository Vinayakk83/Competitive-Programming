#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{ 
    ll a,b;
    cin >> a >> b;
    ll count=0;
    ll a1=max(a,b),b1=min(a,b);
    while(a1%2==0&&a1!=b1)
    {
        a1=a1>>1;
        count++;
    }
    if(a1!=b1)cout << "-1" << endl;
    else
    {
        ll eight=count/3;
        ll four=(count-3*eight)/2;
        ll two=count-2*four-3*eight;
        cout << eight+four+two << endl;
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
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
