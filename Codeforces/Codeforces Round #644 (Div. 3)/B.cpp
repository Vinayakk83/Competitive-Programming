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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int num=arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        num=min(arr[i]-arr[i-1],num);
        if(num==0)
        {
            break;
        }
    }
    cout << num << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    //sieve();
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
