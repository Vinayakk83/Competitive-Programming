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

//int arr[maxn];

void solve()
{
    int n,x,odd=0,even=0,y;
    cin >> n >> x;
    for(int i=0;i<n;i++)
    {
        cin >> y;
        if(y&1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if(odd==0)
        {
            cout << "NO" << endl;
        }
    else if(even==0)
    {
        if(x&1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if(n&1)
        {
            if(even&1)
            {
                if(x<n)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "YES" << endl;   
            }
        }
        else
        {
            if(even&1)
            {
                cout << "YES" << endl;
            }
            else
            {
                if(x<n)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO"<< endl;
                }
            }
        }   
    }
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
