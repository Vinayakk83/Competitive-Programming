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
    set<int>s;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        s.insert(x);
    }
    bool flag;
    for(int i=1;i<=1024;i++)
    {
        flag=true;
        for(int j:s)
        {
            //cout << j << " ";
            if(s.find(j^i)==s.end())
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << i << endl;
            break;
        }
    }
    if(flag!=true)
    {
        cout << "-1" << endl;
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
