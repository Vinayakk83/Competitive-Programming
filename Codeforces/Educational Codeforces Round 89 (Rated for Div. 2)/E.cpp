#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 998244353
#define maxN 200005
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,m;
int a[maxN];
int b[maxN];

int mul(int x,int y)
{
    return (x*1LL*y)%modulo;
}

void solve()
{ 
    cin >> n >> m;
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<m;i++)cin >> b[i];
    reverse(a,a+n);
    reverse(b,b+m);
    a[n]=-1;
    
    int num=a[0];
    int pos=0;
    while(pos<n&&num>b[0])
    {
        pos++;
        num=min(num,a[pos]);
    }
    if(pos==n||num<b[0])
    {
        cout << "0" << endl;
        return;
    }

    int ans=1;
    int i=0;
    while(true)
    {
        if(i==m-1)
        {
            if(*min_element(a+pos,a+n)!=b[i])
            {
                cout << "0" << endl;
                return;
            }
            break;
        }
        bool flag=false;
        int npos=pos;
        while(npos<n&&num!=b[i+1])
        {
            npos++;
            num=min(num,a[npos]);
            if(flag==false&&num<b[i])
            {
                flag=true;
                ans=mul(ans,npos-pos);
            }
        }
        if(npos==n||num!=b[i+1])
        {
            cout << "0" << endl;
            return;
        }
        i++;
        pos=npos;
    }
    cout << ans << endl;
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
