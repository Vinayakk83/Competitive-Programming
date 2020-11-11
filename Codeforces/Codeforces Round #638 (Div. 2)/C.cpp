#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 100001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    if(str[0]!=str[k-1])
    {
        cout << str[k-1] << endl;
    }
    else
    {
        string ans="";
        ans+=char(str[0]);
        if(str[k]!=str[n-1])
        {
            for(int i=k;i<n;i++)ans+=str[i];
        }
        else
        {
            int x=n-k;
            x=(n-1)/k;
            for(int i=0;i<x;i++)
            {
                ans+=str[k];
            }   
        }
        cout << ans << endl;
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
    return 0;
}
