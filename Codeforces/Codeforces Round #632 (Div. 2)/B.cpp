#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<n;i++)cin >> b[i];
    bool f1=false,f2=false;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]&&!f1||a[i]>b[i]&&!f2){
            cout << "NO" << endl;
            return;
        }
        if(a[i]==1)f1=true;
        if(a[i]==-1)f2=true;
    }
    cout << "YES" << endl;
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
