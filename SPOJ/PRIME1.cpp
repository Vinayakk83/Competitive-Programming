#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
const int N=1e6+1;
 
// output:-
// 2
// 3
// 5
// 7
 
// 3
// 5
 
const int maxN=1e6+1;
vector<int>primes;
 
void sieve() 
{  
    bool prime[maxN+1]; 
    memset(prime,true,sizeof(prime));
    for (ll p=2;p*p<=maxN;p++)
        if (prime[p])
            for (ll i=p*p;i<=maxN;i+=p)prime[i]=false;
    for(int p=2;p<=maxN;p++) 
       if (prime[p])primes.emplace_back(p);
}
 
void printprimes(ll m,ll n)
{
    bool arr[n-m+1];
    memset(arr,true,sizeof(arr));
    for(int i=0;1LL*primes[i]*primes[i]<=n;i++)
    {
        ll curr_prime=primes[i];
        ll base=(m/curr_prime)*curr_prime;
        if(base<m)base+=curr_prime;
        for(ll j=base;j<=n;j+=curr_prime)arr[j-m]=false;
        if(base==curr_prime)arr[base-m]=true;
    }
    for(int i=m==1?1:0;i<=n-m;i++)
    {
        if(arr[i])cout << m+i << endl;
    }
    cout << endl;
}
 
void solve()
{ 
    int n,m;
    cin >> m >> n;
    printprimes(m,n);
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
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
    return 0;
} 
