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

const int N=1e6+1;


void solve()
{ 
    int n,k;
    cin >> n >> k;
    vector<vector<int> >arr(n,vector<int>(n));
    int r=0,c=0;
    if(k%n==0)cout << "0" << endl;
    else cout << "2" << endl;
    while(k>0)
    {
        k--;
        arr[r][c]=1;
        r++,c++,c%=n;
        if(r==n)r=0,c++,c%=n;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout << arr[i][j];
        cout << endl;
    }
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
