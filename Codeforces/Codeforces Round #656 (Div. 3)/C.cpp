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
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    int i=n-1;
    for(;i>=1;i--)if(a[i]>a[i-1])break;
    for(;i>=1;i--)if(a[i]<a[i-1])break;
    cout << i << endl;
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
