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

void solve()
{
    ll n;
    cin >> n;
    int arr[n+1]={0};
    for(int i=1;i<n+1;i++)
    {
        cin >> arr[i];    
    }
    sort(arr,arr+n+1);
    for(int i=n;i>0;i--)
    {
        if(i>=arr[i])
        {
            cout << i+1 << endl;
            return;
        }
    }
    cout << "1" << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
