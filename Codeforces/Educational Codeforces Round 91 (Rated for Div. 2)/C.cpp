#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;

void solve()
{ 
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin >>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    // for(int i:a)cout << i << " ";
    // cout << endl;
    int j=1;
    for(int i=0;i<n;i++)
    {
        if((x+a[i]-1)/a[i]==j)
        {
            ans++;
            j=1;
        }
        else j++;
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
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
