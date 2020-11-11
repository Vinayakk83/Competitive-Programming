#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll ,ll> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxn 1000001
#define PI 3.14159265
#define INF 1000000009
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
  
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int >arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int sum=0,m=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum%x!=0)
        {
            m=max(m,i+1);
        }
    }
    sum=0;
    for(int i=n-1;i>=0;i--)
    {
        sum+=arr[i];
        if(sum%x!=0)
        {
            m=max(m,n-i);
        }
    }
    if(m==0)
    {
        m=-1;
    }
    cout << m << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    cin >> t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
