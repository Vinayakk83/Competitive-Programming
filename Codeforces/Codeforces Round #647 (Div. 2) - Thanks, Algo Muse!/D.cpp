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
    int n,m;
    cin >> n >> m;
    vector<int>ref[n],topics[n];
    vector<int>blog_topic(n);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        ref[a-1].emplace_back(b-1);
        ref[b-1].emplace_back(a-1);
    }
    for(int i=0;i<n;i++)
    {
        cin >> blog_topic[i];
        blog_topic[i]--;
        topics[blog_topic[i]].emplace_back(i);
    }
    bool flag=true;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(auto each:topics[i])
        {
            set<int >s;
            for(auto neigh:ref[each])
            {
                if(blog_topic[neigh]<blog_topic[each])s.insert(blog_topic[neigh]);
                if(blog_topic[neigh]==blog_topic[each])
                {
                    cout << "-1";
                    return;
                }
            }
            if(s.size()!=blog_topic[each])
            {
                cout << "-1";
                return;
            }
            ans.emplace_back(each);
        }
    }
    for(int i:ans)cout << i+1 << " ";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
