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

const int N=1e7+1;

void solve()
{
    ll n;
    cin >> n;
    int c1=0;
    while(n%3==0)
    {
        n=n/3;
        c1++;
    }
    int c2=0;
    while(n%2==0)
    {
        n=n/2;
        c2++;
    }
    if(c1<c2)cout << "-1" << endl;
    else
    {
        if(n!=1)cout << "-1" << endl;
        else
        {
            cout << 2*c1-c2 << endl;   
        }
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
    return 0;
}
