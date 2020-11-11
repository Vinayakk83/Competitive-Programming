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

int arr[maxn];

void solve()
{
    int n,k;
    bool flag=false;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        if(arr[i]>k)
        {
            arr[i]=2;
        }
        else if(arr[i]==k)
        {
            arr[i]=1;
            flag=true;
        }
        else
        {
            arr[i]=0;
        }
    }
    if(flag==false)
    {
        cout << "no" << endl;
    }
    else if(n==1)
    {
        cout << "yes" << endl;
    }
    else
    {
        flag=false;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n&&j-i<=2;j++)
            {
                if(arr[i]&&arr[j])
                {
                    cout << "yes" << endl;
                    flag=true;
                    return;
                }
            }
        }
        if(flag==false)
        {
            cout << "no" << endl;
        }   
    }
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    //sieve();
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
