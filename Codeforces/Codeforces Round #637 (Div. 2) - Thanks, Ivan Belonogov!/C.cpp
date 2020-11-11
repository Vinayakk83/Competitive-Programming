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

const int N=2e6+1;

void solve()
{ 
    int n;
    cin >> n;
    vector<int>p(n);
    for(int i=0;i<n;i++)cin >> p[i];
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(p[i+1]-p[i]>1)
        {
            flag=false;
            break;
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
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
