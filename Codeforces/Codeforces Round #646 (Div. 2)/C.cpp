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

int arr[maxn];
void solve()
{
    int n,x,a,b;
    cin >> n >> x;
    x--;
    vector<int> tree(n,0);
	for(int i=0;i<n-1;i++)
    {
        cin >> a >> b;
        tree[a-1]++;
        tree[b-1]++;
    }
    if(tree[x]<=1)
    {
        cout << "Ayush" << endl;
    }
    else
    {
        if(!(n&1))
        {
            cout << "Ayush" << endl;
        }
        else
        {
            cout << "Ashish" << endl;
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
