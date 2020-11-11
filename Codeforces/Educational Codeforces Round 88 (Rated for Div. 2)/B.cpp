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

//int arr[maxn];

void solve()
{
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int ans=0;
    if(2*x<=y)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(str[i][j]=='.')
                {
                    ans+=x;
                }
            }
        }
    }
    else
    {
        int count;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<m;j++)
            {
                if(str[i][j]=='.')
                {
                    count++;
                }
                else
                {
                    if(count==1)
                    {
                        ans+=x;
                    }
                    count=0;
                }
                if(count==2)
                {
                    ans+=y;
                    count=0;
                }
            }
            if(count==1)
            {
                ans+=x;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
