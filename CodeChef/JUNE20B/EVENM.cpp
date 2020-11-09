#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll ,ll> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxn 1000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{ 
    int n;
    cin >> n;
    int k=0,l;
    for(int i=2;i<=n;i+=2)
        {   
            for(int j=1;j<=n;j++)
            {
                k++;
                cout << k << " ";
            }
            cout << endl;
            l=i*n;
            k=l;
            for(int j=1;j<=n;j++)
            {
                cout << l << " ";
                l--;
            }
            cout << endl;
        }
    if(n&1)
    {
        for(int i=1;i<=n;i++)
        {
            k++;
            cout << k << " ";
        }
        cout << endl;
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}