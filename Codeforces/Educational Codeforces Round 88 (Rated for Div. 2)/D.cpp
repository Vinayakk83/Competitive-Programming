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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans=0;
    for(int i=30;i>0;i--)
    {
        int curr_sum=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>i)
            {
                curr_sum=0;
            }
            else
            {
                curr_sum+=arr[j];
                curr_sum=max(curr_sum,0);
                ans=max(ans,curr_sum-i);   
            }
        }
    }
    cout << ans << endl;
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
