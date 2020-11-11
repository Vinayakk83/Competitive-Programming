#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 200005
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<ll>ans;
    for(int i=1;i<=n;i*=2)
    {
        ans.emplace_back(i);
        n-=i;
    }
    if(n>0)
    {
        ans.emplace_back(n);
        sort(ans.begin(),ans.end());
    }
    cout << ans.size()-1 << endl;
    for(int i=1;i<ans.size();i++)cout << ans[i]-ans[i-1] << " ";
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
