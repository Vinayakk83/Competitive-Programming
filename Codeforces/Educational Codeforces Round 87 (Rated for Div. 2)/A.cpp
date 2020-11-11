#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a ,b ,c ,d ,x ,y ,count;
    cin >> a >> b >> c >> d;
    x=c-d;
    if(x>0)
    {
        if(a<=b)
        {
            cout << b << endl;
        }
        else
        {
            a=a-b;
            if(a%x==0)
            {
                count=a/x;
            }
            else
            {
                count=a/x;
                count++;
            }
            cout << b+(count*c) << endl;
        }
        
    }
    else
    {
        if(a<=b)
        {
            cout << b << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        
    }
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
