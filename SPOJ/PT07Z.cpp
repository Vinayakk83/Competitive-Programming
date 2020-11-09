#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e4+1;

int nodes, ans = 0 ;
vector<int>adj[N];
vector<bool>visited(N);

int dfs(int idx){
    int c, c1 = 0, c2 = 0;
    visited[idx] = true;
    for(int i = 0;i < adj[idx].size();i++){
        if(visited[adj[idx][i]] == false){
            c = dfs(adj[idx][i]);
            if(c >= c1)c2 = c1, c1 = c;
            else if(c > c2)c2 = c;
        }
    }
    ans = max(ans, c1 + c2);
    return (c1 + 1);
}

void solve()
{
    cin >> nodes;
    for(int i = 0;i < nodes - 1;i++){
        int firstNode, secondNode;
        cin >> firstNode >> secondNode;
        firstNode--, secondNode --;
        adj[firstNode].emplace_back(secondNode);
        adj[secondNode].emplace_back(firstNode);
    }
    dfs(0);
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    string s;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

