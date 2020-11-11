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

const int N=1e5+1;


void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if((!(i&1)&&a[i]>=0)||(i&1&&a[i]<=0))a[i]*=-1;
    }
    for(int i:a)cout << i << " ";
    cout << endl;
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
