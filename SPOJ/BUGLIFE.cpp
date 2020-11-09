#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;
int numberOfBugs, numberOfInteractions;

bool checkForBipartite(vector<int> adj[], vector<int> &colorArray, vector<bool> &visited, int idx) {
    for (int u : adj[idx]) {
        if (visited[u] == false) {  
            visited[u] = true;  
            colorArray[u] = !colorArray[idx]; 
            if (!checkForBipartite(adj, colorArray, visited, u)) return false; 
        } 
        else if(colorArray[u] == colorArray[idx]) return false; 
    }
    return true;
}

bool isBipartite(vector<int> adj[]) {
    vector<int> colorArray(numberOfBugs, -1);
    vector<bool> visited(numberOfBugs);

    for(int i = 0; i < numberOfBugs; i++) {
        if(colorArray[i] == -1) {
            if(!checkForBipartite( adj, colorArray, visited, i)) return false;
        }
    }
    return true;
}

void solve()
{
    cin >> numberOfBugs >> numberOfInteractions;
    vector<int>adj[numberOfBugs];
    for(int i = 0; i < numberOfInteractions; i++) {
        int x, y;
        cin >> x >> y;
        adj[x-1].emplace_back(y-1);
        adj[y-1].emplace_back(x-1);
    }
    if(isBipartite(adj)) {
        cout << "No suspicious bugs found!" << endl;
    } else {
        cout << "Suspicious bugs found!" << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    cin>>t;
    // t=1;
    for(int i = 0; i < t; i++)
    {
        cout << "Scenario #" << i+1 << ":" << endl;
        solve();
    }
    return 0;
}

