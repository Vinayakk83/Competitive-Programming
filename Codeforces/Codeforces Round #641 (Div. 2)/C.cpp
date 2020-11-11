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

int arr1[maxn];

void sieve() 
{ 
    arr1[1] = 1; 
    for (int i=2; i<maxn; i++)  
        arr1[i] = i;
    for (int i=4; i<maxn; i+=2) 
        arr1[i] = 2; 
    for (int i=3; i*i<maxn; i++) 
    { 
        if (arr1[i] == i) 
        {  
            for (int j=i*i; j<maxn; j+=i) 
                if (arr1[j]==j) 
                    arr1[j] = i; 
        } 
    } 
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<int>ans;
    int k,count1,count2,x;
    int i=0;
    while(i<n)
    {
        count1=1;
        count2=0;
        x=arr[i];
        k=arr1[x];
        if(k==1)
        {
            i++;
            continue;
        }
        arr[i]/=k;
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(arr[j]%k==0)
                {
                    arr[j]/=k;
                    count1++;
                }
                else
                {
                    count2++;
                }
                if(count2==2)
                {
                    break;
                }
            }
        }
        if(count1>=n-1)
        {
            ans.emplace_back(k);
        }
    }
    ll a=1;
    for(int i=0;i<ans.size();i++)
    {
        //cout << ans[i] << " ";
        a*=ans[i];
    }
    cout << a << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    sieve();
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
