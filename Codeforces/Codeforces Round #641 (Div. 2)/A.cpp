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

// int arr[maxn];

// void sieve() 
// { 
//     arr[1] = 1; 
//     for (int i=2; i<maxn; i++)  
//         arr[i] = i;
//     for (int i=4; i<maxn; i+=2) 
//         arr[i] = 2; 
//     for (int i=3; i*i<maxn; i++) 
//     { 
//         if (arr[i] == i) 
//         {  
//             for (int j=i*i; j<maxn; j+=i) 
//                 if (arr[j]==j) 
//                     arr[j] = i; 
//         } 
//     } 
// }

void solve()
{
    ll n ,k;
    bool flag=false;
    cin >> n >> k;
    // for(ll i=0;i<k;i++)
    // {
    //     n+=arr[n];
    // }
    // cout << n << endl;
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            n+=i;
            flag = true; 
            break; 
        }
    }
    if(flag==false)
    {
        n=2*n;
    }
    n+=2*(k-1);
    cout << n << endl;
}

int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    //sieve();
    ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
