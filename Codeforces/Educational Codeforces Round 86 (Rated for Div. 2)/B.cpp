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
    string str;
    cin >> str;
    bool flag=true;
    for(int i=1;str[i];i++)
    {
        if(str[i]!=str[i-1])
        {
            flag=false;
            break;
        }
    }
    if(flag)cout << str << endl;
    else
    {
        string ans="";
        for(int i=0;str[i];i++)
        {
            ans+="01";
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
}
