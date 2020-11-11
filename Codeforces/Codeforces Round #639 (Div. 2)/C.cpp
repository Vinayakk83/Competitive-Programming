#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n),room(n,1);
    for(int i=0;i<n;i++)cin >>arr[i];
    for(int i=0;i<n;i++)
    {
        int j=i+arr[i%n];
        if(j<0)j=((j%n)+n)%n;
        else j=j%n;
        room[j]++;
        room[i]--;
    }
    for(int i=0;i<n;i++)
    {
        if(room[i]>1)
        {
            cout << "NO" << endl;
            return;
        }
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
    //t=1;
    while(t--)
    {
        solve();
    }
}
