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
    vector<string>ans;
    string s="";
    for(int i=0;i<m;i++)s+='B';
    for(int i=0;i<n;i++)ans.emplace_back(s);
    ans[0][0]='W';
    for(string i:ans)cout << i << endl;
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
