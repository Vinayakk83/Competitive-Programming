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
    string s;
    cin >> s;
    vector<int>alp(26);
    for(char i:s)alp[i-'a']++;
    for(int len=n;len>=1;len--)
    {
        vector<bool>vis(len);
        vector<int>cycles;
        for(int i=0;i<len;i++)
        {
            if(vis[i])continue;
            int j=(i+k)%len;
            vis[i]=true;
            cycles.emplace_back(0);
            cycles.back()++;

            while(!vis[j])
            {
                cycles.back()++;
                vis[j]=true;
                j=(j+k)%len;
            }
        }
        vector<int>cnt;
        cnt=alp;
        sort(cycles.begin(),cycles.end());
        sort(cnt.begin(),cnt.end());
        bool flag=true;
        while(!cycles.empty())
        {
            if(cnt.back()<cycles.back())
            {
                flag=false;
                break;
            }
            else
            {
                cnt.back()-=cycles.back();
                cycles.pop_back();
                sort(cnt.begin(),cnt.end());
            }
        }
        if(flag)
        {
            cout << len << endl;
            break;
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
