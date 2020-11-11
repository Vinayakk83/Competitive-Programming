#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;
string s;
int n;

int ans(int l,int r,char c)
{
    if(l==r)return s[l]!=c;
    int mid=(l+r)/2;
    int cnt1=ans(l,mid,c+1);
    int cnt2=ans(mid+1,r,c+1);
    for(int i=mid+1;i<r+1;i++)cnt1+=c!=s[i];
    for(int i=l;i<mid+1;i++)cnt2+=c!=s[i];
    return min(cnt1,cnt2);
}

void solve()
{
    cin >> n >> s;
    cout << ans(0,n-1,'a') << endl;
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
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
