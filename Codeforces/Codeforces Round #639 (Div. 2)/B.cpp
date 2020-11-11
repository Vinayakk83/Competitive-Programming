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

const ll m=1000000001;
vector<ll>arr;
void fun()
{
    int i=1,x=0;
    arr.emplace_back(0);
    while(arr[i-1]<m)
    {
        x+=(i-1);
        int z=3*x+2*i;
        arr.emplace_back(z);
        i++;
    }
}

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    while(n>1)
    {
        auto it = upper_bound(arr.begin(), arr.end(), n) - 1;
        n -= *it;
        count++;
    }
    cout << count << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    fun();
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
