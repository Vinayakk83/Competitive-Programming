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

//int arr[maxn];

void solve()
{
    int t,h,c;
    cin >> h >> c >> t;
    if((h+c)/2>=t)
    {
        cout << "2" << endl;
    }
    else
    {
        int i=(h-t)/(2*t-h-c);
        if((abs(t*(2*i+1)-((h*(i+1))+i*c))*(2*i+3))<=abs(t*(2*i+3)-((h*(i+2))+(i+1)*c))*(2*i+1))
        {
            cout << 2*i+1 <<  endl;
        }
        else
        {
            cout << 2*i+3 << endl;
        } 
    }  
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
