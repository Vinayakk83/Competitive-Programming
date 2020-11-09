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
    int n,c;
    cin >> n >> c;
    vector<int>x(n);
    for(int i=0;i<n;i++)cin >> x[i];
    sort(x.begin(),x.end());
    int l=0,r=x[n-1],ans=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        int count=1,pos=0;
        for(int i=1;i<n&&count<c;i++)
        {
            if(x[i]-x[pos]>=mid)
            {
                pos=i;
                count++;
            }
        }
        if(count<c)r=mid-1;
        else 
        {
            ans=mid;
            l=mid+1;
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
