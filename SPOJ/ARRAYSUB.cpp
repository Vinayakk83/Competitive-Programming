#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

void solve() {
    int n, k;
    cin >> n;
    vector<int> arr(n), ans;
    for(int i = 0; i < n; i++) 
    	cin >> arr[i];
    cin >> k;
    deque<int> q;
    for(int i = 0; i < k; i++) {
    	while(!q.empty() && arr[i] >= arr[q.back()])
    		q.pop_back();
    	q.push_back(i);
    }
    for(int i = k; i < n; i++) {
    	ans.emplace_back(arr[q.front()]	);
    	while(!q.empty() && arr[i] >= arr[q.back()])
    		q.pop_back();
    	while(!q.empty() && q.front() <= (i - k))
    		q.pop_front();
    	q.push_back(i);
    }
    if(!q.empty())
    	ans.emplace_back(arr[q.front()]);
    for(auto i: ans)
    	cout << i << " ";
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
