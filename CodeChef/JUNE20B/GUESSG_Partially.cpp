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
    char x,x1;
    ll n,l,r,y,y1;
    cin >> n;
    l=1;
    r=n;
    y=(l+r)/2;
    while(true)
    {
        cout << y << endl;
        cin >> x;
        if (x=='G')
        {
            y1=(l+y)/2;
            cout << y1 << endl;
            cin >> x1;
            if (x1=='G')
            {
                l=y1+1;
                y=(l+r)/2;
            }
            else if (x1=='L')
            {
                y--;
            }
            else
            {
                break;
            }
        }
        else if (x=='L')
        {
            y1=(y+r)/2;
            cout << y1 << endl;
            cin >> x1;
            if (x1=='G')
            {
                y++;
            }
            else if (x1=='L')
            {
                r=y1-1;
                y=(l+r)/2;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    //fast;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}