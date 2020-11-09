#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e4+1;

int nodes, edges;
vector<int>adj[N];
vector<bool>visited(N);

void dfs(int idx){
    visited[idx] = true;
    for(int i = 0;i < adj[idx].size();i++){
        if(visited[adj[idx][i]] == false) dfs(adj[idx][i]);
    }
}

void solve()
{
    cin >> nodes >> edges;
    for(int i = 0;i < edges;i++){
        int firstNode, secondNode;
        cin >> firstNode >> secondNode;
        firstNode--, secondNode --;
        adj[firstNode].emplace_back(secondNode);
        adj[secondNode].emplace_back(firstNode);
    }
    if(nodes - 1 == edges){
        int count = 0;
        for(int i = 0;i < nodes;i++){
            if(visited[i] == false){
                count++;
                if(count > 1){
                    cout << "NO" << endl;
                    return;
                }
                dfs(i);
            }
        }
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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

