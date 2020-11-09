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
    string str;
    cin >> str;
    int flagx,flagy;
    if(str[0]=='x')
    {
        flagx=1;
        flagy=0;        
    }
    else
    {
        flagy=1;
        flagx=0;
    }
    int count=0;
    for(int i=1;str[i];i++)
    {
        if(str[i]=='x')
        {
            flagx=1;
        }
        else
        {
            flagy=1;
        }
        if(flagx==1&&flagy==1)
        {
            count++;
            flagx=0;
            flagy=0;
        }
    }
    cout << count << endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}