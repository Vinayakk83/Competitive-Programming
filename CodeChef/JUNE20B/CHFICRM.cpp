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
    int n;
    cin >> n;
    vector<int>arr(n);
    int c0=0,c1=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(arr[0]==5)
    {
        c0++;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==5)
            {
                c0++;
            }
            else
            {
                if(c1>0&&arr[i]-10==5)
                {
                    c1--;
                }
                else if(c0>1&&arr[i]-10==5)
                {
                    c0-=2;
                }
                else if(c0>0&&arr[i]-5==5)
                {
                    c0--;
                    c1++;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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