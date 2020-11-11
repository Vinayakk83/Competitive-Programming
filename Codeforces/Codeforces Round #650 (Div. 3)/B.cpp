#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{ 
    int n;
    cin >> n;
    int arr[n];
    int c1=0,c2=0;
    for(int i=0;i<n;i++)cin >> arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1&&!(i&1))
        {
            c1++;
        }
        if(!(arr[i]&1)&&i&1)
        {
            c2++;
        }
    }
    if(c1==c2)
    {
        cout << c1 << endl;
    }
    else
    {
        cout << "-1" << endl;
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
}
