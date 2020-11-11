#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arraySum(int a[], int n)  
{ 
    int initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout << a[i];
    // }
    // cout << endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout << b[i];
    // }
    // cout << endl;
    int j=0,l;
    for(int i=0;i<n;i++)
    {
        if(j==k)
        {
            break;
        }
        if(a[i]<b[n-i-1])
        {
            swap(a[i],b[n-i-1]);
            j++;   
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout << b[i];
    // }
    // cout << endl;
    cout << arraySum(a, n) << endl;
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
