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
    int n,a,b;
    cin >> n >> a >> b;
    string s="",ans="";
    for(char i='a';i-'a'<b;i++)s+=i;
    for(int i=0;i<n/b;i++)ans+=s;
    for(char i='a';i-'a'<n-(n/b*b);i++)ans+=i;
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
