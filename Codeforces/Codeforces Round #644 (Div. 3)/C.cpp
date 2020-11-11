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
    int arr[n],odd=0,even;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]&1)
        {
            odd++;
        }
    }
    even=n-odd;
    if(!(odd&1)&&!(even&1))
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==1)
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" <<endl;
    }
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
