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
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int>arr;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='1')
            arr.emplace_back(i+1);
    }
    int num=0;
    if(arr.empty())
    {
        num=1;
        if(n-k-1>0)
        num=num+(n-1)/(k+1);
    }
    else
    {
        for(int i=1;i<arr.size();i++)
            if(arr[i]-arr[i-1]-1-2*k>0)num=num+(arr[i]-arr[i-1]-1-k)/(k+1);
        if(arr.front()!=1 && arr.front()-1-k>0)num=num+(arr.front()-1)/(k+1);
        if(arr.back()!=n && n-arr.back()-k>0)num=num+(n-arr.back())/(k+1);
    }
    cout << num << endl;
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
