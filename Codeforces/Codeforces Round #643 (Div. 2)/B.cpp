#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll num1,num2;
    cin>>num1;
    ll arr1[num1];
    for(ll i=0;i<num1;i++)
    {
        cin>>arr1[i];
    }
    sort(arr1,arr1+num1);
    int count1=1,gr1=0;
    for(ll i=0;i<num1;i++)
    {
        if(arr1[i]==count1)
        {
            gr1++;
            count1=1;
            continue;
        }
        count1++;
    }
    cout<<gr1<<endl;
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
