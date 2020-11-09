#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

int d[182][182];
int x[] = {0, 0, 1, -1};
int y[] = {1,-1, 0, 0};
 
bool isValid(int x, int y, int &n, int &m, string *str) { 
 	return x >= 0 && x < n && y >= 0 && y < m && str[x][y] == '0' && d[x][y] == 0; 
}

void BFS(string *str, int &n, int &m){ 
 	queue<pair<int,int>> q; 
 	for(int i = 0; i < n; i++) { 
 		for(int j = 0; j < m; j++) { 
 			if(str[i][j] == '1') 
 				q.push(make_pair(i,j)); 
 			d[i][j] = 0; 
 		} 
 	} 
 	while(!q.empty()){ 
 		int xCoordinate = q.front().first; 
 		int yCoordinate = q.front().second; 
 		q.pop();
 		for(int i = 0; i < 4; i++){ 
 			if(isValid(x[i] + xCoordinate, y[i] + yCoordinate, n, m, str)){ 
 				q.push(make_pair(x[i] + xCoordinate, y[i] + yCoordinate)); 
 				d[x[i] + xCoordinate][y[i] + yCoordinate] = d[xCoordinate][yCoordinate] + 1; 
 			}
 		}
 	}
}

void solve() {
    int n, m; 
    cin >> n >> m; 
    string str[n]; 
    for(int i = 0; i < n; i++) cin >> str[i];
    BFS(str, n, m);
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < m; j++) {
            cout << d[i][j] << " ";
        }
        cout << endl;
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
    cin >> t;
    // t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
