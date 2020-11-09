#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<ll>());
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]-i>0)
            {
                sum=(sum+arr[i]-i) % modulo;
            }
            else
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}