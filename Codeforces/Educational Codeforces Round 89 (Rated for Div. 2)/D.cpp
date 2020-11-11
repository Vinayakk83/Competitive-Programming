#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define MAXN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int spf[MAXN]; 
void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2;
    for (int i=3; i*i<MAXN; i++) 
    { 
        if (spf[i] == i) 
        { 
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 

void solve()
{ 
    int n;
    cin >> n;
    vector<int>arr(n);
    vector<pi >ans;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int x=spf[arr[i]];
        int d1=1,d2,num;
        num=arr[i];
        while(num%x==0)
        {
            num/=x;
            d1*=x;
        }
        d2=arr[i]/d1;
        if(d1>1&&d2>1)
        {
            ans.push_back(make_pair(d1,d2));
        }
        else
        {
            ans.push_back(make_pair(-1,-1));
        }
    }
    for(auto i:ans)
    {
        cout << i.first << " ";
    }
    cout << endl;
    for(auto i:ans)
    {
        cout << i.second << " ";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    sieve();
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
