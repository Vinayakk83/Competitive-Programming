#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N=2e6+1;

void solve()
{ 
    ll a,b,q;
    cin >> a >> b >> q;
    if(a>b)swap(a,b);
    int num=lcm(a,b);
    ll l1,l2,r1,r2,m1,m2;
    for(int i=0;i<q;i++)
    {
        ll l,r,x,x1,x2,ans=0;
        cin >> l >> r;
        if(l==1)l--;
        x1=(l+num-1)/num;
        r1=x1*num;
        l1=(x1-1)*num;
        m1=l1+b; 
        x2=(r+num-1)/num;
        l2=(x2-1)*num;
        r2=x2*num;
        m2=l2+b;
        if(r1<=l2)
        {
            x=(l2-r1)/num;
            ans+=(num-b)*x;
        }
        if(m1==m2)
        {
            if(l<m1)
            {
                if(r>=m1)ans+=r-m1+1;
                if(r==r1)ans--;
            }
            else
            {
                ans+=r-l+1;
                if(r==r1)ans--;
            }
        }
        else
        {
            if(l<m1)ans+=r1-m1;
            else ans+=r1-l;
            if(r>=m2)
            {
                ans+=r-m2+1;
                if(r==r2)ans--;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
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
