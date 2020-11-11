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
    int n,m;
    cin >> n >> m;
    int arr[n][m],x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    bool flag1,flag2;
    int countr=0,countc=0;
    for(int i=0;i<n;i++)
    {
        flag1=false;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                flag1=true;
                break;
            }
        }
        if(flag1==false)
        {
            countr++;
        }
    }
    for(int i=0;i<m;i++)
    {
        flag2=false;
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]==1)
            {
                flag2=true;
                break;
            }
        }
        if(flag2==false)
        {
            countc++;
        }
    }
    x=min(countc,countr);
    //cout << x << endl;
    if (x&1)
        cout << "Ashish" << endl;
    else
        cout << "Vivek" << endl;
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
