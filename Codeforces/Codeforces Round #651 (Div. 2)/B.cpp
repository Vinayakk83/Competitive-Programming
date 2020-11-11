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

void solve()
{
    int n;
    cin >> n;
    int arr[2*n];
    vector<int >odd,even;
    //int odd=0,even=0;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin >> x;
        if(x&1)
        {
            odd.emplace_back(i+1);
        }
        else
        {
            even.emplace_back(i+1);
        }
    }
    if(odd.size()&1)
    {
        odd.pop_back();
        even.pop_back();
        if(!odd.empty())
        {
            for(int i=0;i<odd.size();i+=2)
            cout << odd[i] << " " << odd[i+1] << endl;
        }
        if(!even.empty())
        {
            for(int i=0;i<even.size();i+=2)
            cout << even[i] << " " << even[i+1] << endl;
        }
    }
    else
    {
        if(odd.size()>1)
        {
            odd.pop_back();
            odd.pop_back();
        }
        else
        {
            even.pop_back();
            even.pop_back();
        }
        
        if(!odd.empty())
        {
            for(int i=0;i<odd.size();i+=2)
            cout << odd[i] << " " << odd[i+1] << endl;
        }
        if(!even.empty())
        {
            for(int i=0;i<even.size();i+=2)
            cout << even[i] << " " << even[i+1] << endl;
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
