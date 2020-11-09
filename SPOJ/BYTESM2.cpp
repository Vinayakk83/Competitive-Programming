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
 
// output:-
 
//32 	
 
//7+1+8+5+4+7=32
 
void solve()
{ 
    int n,m;
    cin >> n >> m;
    vector<vector<int> >arr(n,vector<int>(m+2));
    for(int i=0;i<n;i++)
        for(int j=1;j<=m;j++)cin >> arr[i][j];
    int ans=0;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            arr[i][j]+=max(arr[i-1][j-1],max(arr[i-1][j],arr[i-1][j+1]));
            ans=max(ans,arr[i][j]);
        }
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
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
    return 0;
} 
