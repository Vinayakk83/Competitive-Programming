#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ull arr[1000001];

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ull j=1;
    for(int i=c+1;i<=b+c;i++)
    {
        if(j<d-c+1)
        {
            arr[i]=j;
            j++;
        }
        else
        {
            arr[i]=d-c+1;
        }
    }
    // for(int i=a+b;i<=b+c;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    ull ans=0;
    j=1;
    for(int i=a+b;i<min(2*b,a+c);i++)
    {
        ans+=(arr[i]*j);
        j++;
    }
    for(int i=min(2*b,a+c);i<=max(2*b,a+c);i++)
    {
        ans+=(arr[i]*min(b-a+1,c-b+1));
    }
    j=1;
    for(int i=b+c;i>max(2*b,a+c);i--)
    {
        ans+=(arr[i]*j);
        j++;
    }
    cout<<ans<<endl;
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
