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
    map<int,int>val;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        val[x]++;
    }
    int SameValue=-1;
    for(auto i:val)if(i.second>SameValue)SameValue=i.second;
    int UniqueValue=val.size();
    if(UniqueValue==SameValue)cout << SameValue-1 << endl;
    else cout << min(UniqueValue,SameValue) << endl;
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
