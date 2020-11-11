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

const int N=1e6+1;

void solve()
{ 
    int n,k;
    cin >> n >> k;
    vector<int >a(n+1,0);
    for(int i=1;i<n+1;i++)cin >> a[i];
    int x=1,r=k,count=0;
    for(int i=2;i<k;i++)if(a[i]>a[i-1]&&a[i]>a[i+1])count++;
    //cout << count << "--" << x << endl;
    int l=2;
    l++;
    r++;
    //cout << l << "-" << r << endl;
    int c=count;
    while(r<n+1)
    {
        //cout << l << "---" << r << endl;
        if(a[l-1]>a[l-2]&&a[l-1]>a[l])c--;
        if(a[r-1]>a[r-2]&&a[r-1]>a[r])c++;
        if(c>count)
        {
            count=c;
            x=l-1;
        }
        l++;
        r++;
    }
    cout << count+1 << " " << x << endl;
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
