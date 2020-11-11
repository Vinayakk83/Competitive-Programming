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
    int n,x,m;
    cin >> n >> x >> m;
    int arr[m][2];
    for(int i=0;i<m;i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int x1=x,x2=x;
    for(int i=0;i<m;i++)
    {
        if(x1>=arr[i][0]&&x1<=arr[i][1])
        {
            x1=arr[i][0];
        }
        if(x2>=arr[i][0]&&x2<=arr[i][1])
        {
            x2=arr[i][1];
        }
    }
    cout << x2-x1+1 << endl;
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
