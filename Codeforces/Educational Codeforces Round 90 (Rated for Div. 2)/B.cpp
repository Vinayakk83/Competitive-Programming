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
    int zero=0,one=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='0')zero++;
        else one++;
    }
    int x=min(zero,one);
    if(x&1)cout << "DA" << endl;
    else cout << "NET" << endl;
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
