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

const int N=1e7+1;

void solve()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    bool flag=true;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
            if((i==0||i==n-1)&&(j==0||j==m-1))
            {
                if(arr[i][j]>2)flag=false;
            }
            else if(i==0||j==0||i==n-1||j==m-1)
            {
                if(arr[i][j]>3)flag=false;
            }
            else if(arr[i][j]>4)flag=false;
        }
    if(flag)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(i==0||j==0||i==n-1||j==m-1)arr[i][j]=3;
                else arr[i][j]=4;
            }
        arr[0][0]=2,arr[0][m-1]=2,arr[n-1][0]=2,arr[n-1][m-1]=2;
        cout << "YES" << endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    else cout << "NO" << endl;
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
    return 0;
}
