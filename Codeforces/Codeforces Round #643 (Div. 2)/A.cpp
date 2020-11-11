#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ull num,k,n;
    cin>>num>>k;
    int l,s;
    while(k>1)
    {
        n=num;
        l = 0; 
        s = 9;
        while (n) { 
        int r = n % 10;  
        l = max(r, l);  
        s = min(r, s); 
        n = n / 10;
        }
        //cout<<l<<" "<<s<<endl;
        if (s==0)
        {
            break;
        }
        num=num+(l*s);
        k--;
    }
    cout<<num<<endl;
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
