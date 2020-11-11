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
    if(n<k)cout << "NO" << endl;
    else
    {
        if(n&1)
        {
            if(k&1)
            {
                cout << "YES" << endl;
                for(int i=0;i<k-1;i++)cout << "1 ";
                cout << n-k+1 << endl;
            }
            else cout << "NO" << endl;
        }
        else
        {
            if(k<=n/2)
            {
                cout << "YES" << endl;
                if(k&1)
                {
                    for(int i=0;i<k-1;i++)cout << "2 ";
                    cout << n-2*(k-1) << endl;
                }
                else
                {
                    for(int i=0;i<k-1;i++)cout << "1 ";
                    cout << n-k+1 << endl;
                }
            }
            else
            {
                if(k&1)cout << "NO" << endl;
                else
                {
                    cout << "Yes" << endl;
                    for(int i=0;i<k-1;i++)cout << "1 ";
                    cout << n-k+1 << endl;
                }
            }
        }
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
