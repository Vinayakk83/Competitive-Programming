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
    int x,y,z;
    cin >> x >> y >> z;
    if(x==y)
    {
        if(z<=x)
        {
            cout << "YES" << endl;
            cout << z << " " << z << " " << x << endl;
        }
        else cout << "NO" << endl;
    }
    else if(x==z)
    {
        if(y<=x)
        {
            cout << "YES" << endl;
            cout << y << " " << y << " " << x << endl;
        }
        else cout << "NO" << endl;
    }
    else if(y==z)
    {
        if(x<=y)
        {
            cout << "YES" << endl;
            cout << x << " " << x << " " << y << endl;
        }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
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
