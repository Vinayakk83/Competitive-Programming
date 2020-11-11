#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n) 
{  
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
void solve()
{
    int n;
    cin >> n;
    if(n==2)
    {
        cout << "Ashishgup" << endl;
        return; 
    }
    if(n&1)
    {
        if(n==1)cout << "FastestFinger" << endl;
        else cout << "Ashishgup" << endl;
    }
    else
    {
        int x=n;
        while(x%2==0)
        {
            x=x/2;
        }
        if(isPrime(x))
        {
            if(x*2==n)
            cout << "FastestFinger" << endl;
            else
            cout << "Ashishgup" << endl;
        }
        else
        {
            if(x==1)
            {
                cout << "FastestFinger" << endl;
                return;
            }
            cout << "Ashishgup" << endl;
        } 
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
