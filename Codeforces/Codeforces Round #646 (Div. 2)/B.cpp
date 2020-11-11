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
    int n;
    cin >> n;
	string str[n];
    for(int i=0;i<n;i++)
        cin >> str[i];
    for(int i=0;i<n;i++)
    {
        int x0=0,x1=0,y0=0,y1=0,ans;
        for(int j=0;str[i][j];j++)
        {
            if(str[i][j]=='0')
            {
                x0++;
            }
            else
            {
                x1++;
            }
        }
        ans=min(x0,x1);
        for(int j=0;str[i][j];j++)
        {
            if(str[i][j]=='0')
            {
                y0++;
                x0--;
            }
            else
            {
                y1++;
                x1--;
            }
            ans=min(x0+y1,min(ans,x1+y0));
        }
        cout << ans << endl;
    }
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
