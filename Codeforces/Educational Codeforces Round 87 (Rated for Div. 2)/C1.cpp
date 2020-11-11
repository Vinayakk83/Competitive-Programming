#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    //cout<<sin((180/(long double)6)*PI/180)<<endl;;
    long double n,r;
    cin >> n;
    n*=4;
    //r=1/(long double)tan(360/n*PI/180);
    //cout<<r<<" ";
    //cout<< n <<" "<< r<<" ";
    cout << fixed << setprecision(9) << 1/(long double)tan(360/n*PI/180) <<endl;
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
