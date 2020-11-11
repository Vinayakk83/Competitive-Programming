#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll ,ll> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxn 1000001
#define PI 3.14159265
#define INF 1000000009
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

void solve()
{
    int n;
    cin >> n;
    vector<int >arr(n+1,0),ans;
    for(int i=1;i<=n;++i)
    {
        cin >> arr[i];
    }
    for(int i=1;i<=n;++i)
    {
        if(i==1||i==n||arr[i-1]>arr[i]!=arr[i]>arr[i+1])
        {
            ans.emplace_back(arr[i]);
        }
    }
    cout << ans.size() << endl;
    for(int i:ans)
    {
        cout << i << " ";
    }
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
    cin >> t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
