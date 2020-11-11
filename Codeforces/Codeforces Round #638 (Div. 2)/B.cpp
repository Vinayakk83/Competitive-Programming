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
    int n,k;
    cin >> n >> k;
    vector<int>a,ans;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.emplace_back(x);
        s.insert(x);
    }
    //for(int i:s)cout << i << " ";
    //cout << endl;
    if(s.size()>k)
    {
        cout << "-1" << endl;
        return;
    }
    set<int >::iterator itr;
    for(int i=0;i<n;i++)
    {
        itr=s.find(a[i]);
        if(itr!=s.end())
        {
            ans.emplace_back(a[i]);
            s.erase(itr);
        }
    }
    while(ans.size()<k)ans.emplace_back(1);
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(a[i]!=ans[j%k])
        {
            //cout << ans[j%k] << " ";
            ans.emplace_back(ans[j%k]);
            j++;
        }
        //cout << endl;
        ans.emplace_back(a[i]);
        j++;
    }
    cout << ans.size() << endl;
    for(int i:ans)cout << i << " ";
    cout << endl;
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
