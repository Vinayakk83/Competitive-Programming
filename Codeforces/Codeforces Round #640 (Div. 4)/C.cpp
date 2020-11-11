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
    if(k<n)
    {
        cout << k << endl;
    }
    else
    {
        int z=n-1;
        z=k/z;
        if(k%(n-1)==0)
        {
            cout << n*z+k%(n-1)-1 << endl;
        }
        else cout << n*z+k%(n-1) << endl;
    }   
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
}
