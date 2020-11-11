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
    int n;
    cin >> n;
    int a[n],b[n];
    cin >> a[0];
    bool flag1=false;
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        if (a[i-1]>a[i])
        {
            flag1=true;
        }
    }
    cin >> b[0];
    bool flag2=false;
    for(int i=1;i<n;i++)
    {
        cin >> b[i];
        if (b[0]!=b[i])
        {
            flag2=true;
        }
    }
    if (flag1==false)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if(flag2==true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
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
