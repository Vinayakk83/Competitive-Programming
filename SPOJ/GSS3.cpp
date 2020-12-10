#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1,minNum=-1e5;

struct someData{
    ll sum, prefixSum, suffixSum, ans;
};

someData combine(someData l,someData r){
    someData temp;
    temp.sum = l.sum + r.sum;
    temp.prefixSum = max(l.prefixSum, l.sum + r.prefixSum);
    temp.suffixSum = max(r.suffixSum, r.sum + l.suffixSum);
    temp.ans = max(max(l.ans, r.ans), l.suffixSum + r.prefixSum);
    return temp;
}

someData makeData(int value){
    someData temp;
    temp.sum = value;
    temp.prefixSum = temp.suffixSum = temp.ans = value;
    return temp;
}

int midIndex(int l, int r) {
    return l + (r - l) / 2;
}

void buildSegTree(vector<int> &arr, int l, int r, vector<someData> &tree, int idx){
    if(l == r)
        tree[idx] = makeData(arr[l]);
    else {
        int mid = midIndex(l, r);
        buildSegTree(arr, l, mid, tree, idx * 2 + 1);
        buildSegTree(arr, mid + 1, r, tree, idx * 2 + 2);
        tree[idx] = combine(tree[idx * 2 + 1], tree[idx * 2 + 2]);
    }
}

void update(int l, int r, vector<someData> &tree, int idx, int x, int y) {
    if(l <= x && r >= x) {       
        if(x == l && x == r)
            tree[idx] = makeData(y);
        else {
            int mid = midIndex(l, r);
            update(l, mid, tree, idx * 2 + 1, x, y);
            update(mid + 1, r, tree, idx * 2 + 2, x, y);
            tree[idx] = combine(tree[idx * 2 + 1], tree[idx * 2 + 2]);
        }
    }
}

someData query(vector<someData> &tree, int idx, int treel, int treer, int l, int r){
    if(l > r)
        return makeData(minNum);
    if(l == treel && r == treer)
        return tree[idx];
    int treemid = midIndex(treel, treer);
    return combine(query(tree, idx * 2 + 1, treel, treemid, l, min(r, treemid)),
                   query(tree, idx * 2 + 2, treemid + 1, treer, max(l, treemid + 1), r));
}

void solve() { 
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int x = ceil(log2(n));
    int maxSize = 2 * (1 << x) - 1;
    vector<someData> tree(maxSize);
    buildSegTree(arr, 0, n - 1, tree, 0);

    cin >> m;
    for(int i = 0; i < m; i++){
        int x, l, r;
        cin >> x >> l >> r;
        if(x)
            cout << query(tree, 0, 0, n - 1, l - 1, r - 1).ans << "\n";
        else
            update(0, n - 1, tree, 0, l - 1, r);
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
    // cin >> t;
    t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
