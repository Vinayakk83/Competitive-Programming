#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;

void solve()
{ 
    string s;
    ll n,m;
    cin >> n >> m;
    vector<pair<ll,ll>>flowers;
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin >> a >> b;
        flowers.emplace_back(make_pair(a,b));
    }
    getline(cin,s);
    sort(flowers.begin(),flowers.end(),[](const pair<ll,ll>&a,const pair<ll,ll>&b){return a.first > b.first;});
    vector<ll>preComputed(m+1);
    for(int i=1;i<m+1;i++)
        preComputed[i]=preComputed[i-1]+flowers[i-1].first;
    ll ans=0;
    for(int i=0;i<m;i++){
        int left=0,right=m-1,mid,curr=-1;
        while(left<=right){
            mid=left+(right-left)/2;
            if(flowers[i].second<=flowers[mid].first)left=mid+1,curr=mid;
            else right=mid-1;
        }
        // cout << curr << endl;
        if(curr>=n)ans=max(ans,preComputed[n]);
        else{
            if(curr>=i)ans=max(ans,preComputed[curr+1]+flowers[i].second*(n-curr-1));
            else ans=max(ans,preComputed[curr+1]+flowers[i].first+flowers[i].second*(n-curr-2));
        }
    }
    cout << ans << endl;
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
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
