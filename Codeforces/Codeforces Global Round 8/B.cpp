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
    ll n;
    cin >> n;
    string str="codeforces";
    vector<ll>arr(10,1);
    ll mul=1;
    for(int i=0;mul<n;i=(i+1)%10)
    {
        mul=mul/arr[i]*(arr[i]+1);
        arr[i]++;
    }
    for(int i=0;i<10;i++)
        for(int j=0;j<arr[i];j++)cout << str[i];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
