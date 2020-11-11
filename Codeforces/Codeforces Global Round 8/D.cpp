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
    int n;
    cin >> n;
    vector<int>bits(21,0);
    for(int i=0;i<n;i++)
    {
        int x,j=0;
        cin >> x;
        while(x!=0)
        {
            bits[j]+=x%2;
            x=x>>1;
            j++;
        }
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll num=0;
        for(int j=0;j<21;j++)
        {
            if(bits[j]>0)
            {
                bits[j]--;
                num+=pow(2,j);
            }
        }
        sum+=pow(num,2);
    }
    cout << sum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
