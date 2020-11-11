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
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<m;i++)cin >> b[i];
    set<int>c;
    for(int i=0;i<n;i++)c.insert(a[i]);
    for(int i=0;i<m;i++){
        if(c.find(b[i])!=c.end())
        {
            cout << "YES" << endl;
            cout << "1 " << b[i] << endl;
            return; 
        }
    }
    cout << "NO" << endl;
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
