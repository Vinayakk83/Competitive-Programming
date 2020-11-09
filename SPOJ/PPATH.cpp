#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;

vector<int> adj[10001], primeNumbers, Count(10001);
vector<bool> vis(10001);


bool isPrime(int num) {
    for(int i = 2; i * i <= num; i++)
        if(num % i == 0) return false;
    return true;
}

bool relation(int a, int b) {
    int cnt = 0;
    while(a) {
        if(a % 10 != b % 10) cnt++;
        a /= 10;
        b /= 10;
    }
    if(cnt == 1)return true;
    else return false;
}

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = true;
    Count[source]++;

    while(!q.empty()) {
        int p = q.front();
        q.pop();
        for(int i = 0; i < adj[p].size(); i++)
        {
            if(vis[adj[p][i]] == false)
            {
                Count[adj[p][i]] = Count[p] + 1; 
                q.push(adj[p][i]);
                vis[adj[p][i]] = true;
            }
        }
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;
    for(int i = 1000;i < 10000; i++) {
        Count[i] = -1;
        vis[i] = false;
    }
    bfs(a);
    if(Count[b] == -1)cout << "Impossible" << endl;
    else cout << Count[b] << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    
    for(int i = 1000; i < 10000; i++) {
        if(isPrime(i))primeNumbers.emplace_back(i);
    }

    for(int i = 0; i < primeNumbers.size(); i++) {
        for(int j = i + 1; j < primeNumbers.size(); j++) {
            if(relation(primeNumbers[i], primeNumbers[j])) {
                adj[primeNumbers[i]].emplace_back(primeNumbers[j]);
                adj[primeNumbers[j]].emplace_back(primeNumbers[i]);
            }
        }
    }
    // for(int i = 0;i < primeNumbers.size() ;i++)
    // {
    //     for(int j = 0;j < adj[primeNumbers[i]].size(); j++)cout << adj[i][j] << " ";
    //     cout << endl;
    // } 
    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

