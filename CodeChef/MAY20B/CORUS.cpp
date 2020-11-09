#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,q,x,sum;
    vector<ll >vect(26,0);
    string str;
    cin>>n>>q;
    cin>>str;
    for(ll i=0;i<n;i++)
    {
        vect[int(str[i]-'a')]++;
    }
    for(ll i=0;i<q;i++)
    {
        cin>>x;
        sum=0;
        for(int j=0;j<26;j++)
        {
            if(vect[j]<=x)
            {
                continue;
            }
            sum=sum+vect[j]-x;
        }
        cout<<sum<<endl;
    }
}
int main()
{
    fast;
    /* #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif */
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}