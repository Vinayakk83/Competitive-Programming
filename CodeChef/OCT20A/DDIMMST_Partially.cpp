#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

struct Edge { 
	ll src;
	ll dest;
	ll weight; 
}; 

struct Graph { 
	ll V;
	ll E; 
	Edge* edge; 
}; 

struct subset { 
	ll parent;
	ll rank; 
}; 

struct Graph* createGraph(ll V, ll E) 
{ 
	Graph* graph = new Graph; 
	graph->V = V; 
	graph->E = E; 
	graph->edge = new Edge[E]; 
	return graph; 
}

ll find(struct subset subsets[], ll i){
	ll x = subsets[i].parent;
	if (x != i) 
		x = find(subsets, x); 
	return x;
}

void Union(struct subset subsets[], ll x, ll y){
    ll xroot = find(subsets, x); 
	ll yroot = find(subsets, y);

    ll s1 = subsets[xroot].rank, s2 = subsets[yroot].rank;
	
	if (s1 < s2) 
		subsets[xroot].parent = yroot; 
	else if (s1 > s2) 
		subsets[yroot].parent = xroot; 
	else { 
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

ll boruvkaMST(struct Graph* graph) 
{ 
	ll V = graph->V, E = graph->E; 
	
	Edge *edge = graph->edge;
	
	struct subset *subsets = new subset[V];
	
	for (ll v = 0; v < V; v++) { 
		subsets[v].parent = v; 
		subsets[v].rank = 0;  
	} 
	
	vector<ll> mxST(V);
	ll numTrees = V, MSTweight = 0, set1, set2; 
	
	while (numTrees > 1) 
	{ 
        fill(mxST.begin(), mxST.end(), -1);
		for (ll i = 0; i < E; i++) { 
			set1 = find(subsets, edge[i].src); 
			set2 = find(subsets, edge[i].dest); 
			if(set1 != set2) { 
				if(mxST[set1] == -1 || edge[mxST[set1]].weight < edge[i].weight) 
					mxST[set1] = i;
				if(mxST[set2] == -1 || edge[mxST[set2]].weight < edge[i].weight) 
					mxST[set2] = i; 
			}
		} 
		for (ll i = 0; i < V; i++) 
			if(mxST[i] != -1) { 
				set1 = find(subsets, edge[mxST[i]].src);
				set2 = find(subsets, edge[mxST[i]].dest);
				if (set1 != set2){ 
					MSTweight += edge[mxST[i]].weight; 
					Union(subsets, set1, set2); 
					numTrees--;
				} 
			}
	}
	return MSTweight;
} 

void solve() {
    ll n, d;
    scanf("%lld %lld", &n, &d);
    ll ar[n][d];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < d; j++) 
			scanf("%lld", &ar[i][j]);
    }
    ll idx = 0, s = 0, V = n, E = n * (n - 1) / 2; 
	struct Graph* graph = createGraph(V, E); 
    for(ll i=0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
			s = 0;
			for(ll k=0; k<d; k++) 
				s += abs(ar[i][k] - ar[j][k]);
            
			graph->edge[idx].src = i;
            graph->edge[idx].dest = j;
            graph->edge[idx].weight = s;
            idx++;
        }
    }
    printf("%lld\n", boruvkaMST(graph));
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    // cin >> t;
    t = 1;
    while(t--) {
        solve();
    }
    return 0;
}