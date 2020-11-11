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
    int n,k;
    cin >> n >> k;
    vector<ll>a(n),w(k);
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<k;i++)cin >> w[i];
    sort(a.begin(),a.end(),greater<ll>());
    sort(w.begin(),w.end());
    // for(ll i:a)cout << i << " ";
    // cout << endl;
    // for(ll i:w)cout << i << " ";
    // cout << endl;
    ll sum=0,l=0,r=n-1,x=k;
    for(int i=0;i<k;i++)
    {
        if(w[i]!=1)
        {
            x=i;
            break;
        }
        sum+=2*a[l];
        l++;
    }
    for(int j=k-1;j>=x;j--)
    {
        sum+=(a[l]+a[r]);
        l++;
        w[j]--;
        while(w[j])
        {
            r--;
            w[j]--;
        }
    }
    cout << sum << endl;
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
