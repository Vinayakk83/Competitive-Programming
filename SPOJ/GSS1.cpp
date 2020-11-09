#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1,minNum=-1e5;

struct someData{
    int sum, prefixSum, suffixSum, ans;
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

int midIndex(int l, int r){
    return l + (r - l) / 2;
}

void buildSegTree(vector<int> &arr, int l, int r, vector<someData> &tree, int idx){
    if(l == r)tree[idx] = makeData(arr[l]);
    else{
        int mid = midIndex(l, r);
        buildSegTree(arr, l, mid, tree, idx * 2 + 1);
        buildSegTree(arr, mid + 1, r, tree, idx * 2 + 2);
        tree[idx] = combine(tree[idx * 2 + 1], tree[idx * 2 + 2]);
    }
}

someData query(vector<someData> &tree, int idx, int treel, int treer, int l, int r){
    if(l > r)return makeData(minNum);
    if(l == treel && r == treer)return tree[idx];
    int treemid=midIndex(treel, treer);
    // cout << idx << " " <<  l << " " << r << " " << treel << " " << treer << " " << treemid << " --> ";
    return combine(query(tree, idx * 2 + 1, treel, treemid, l, min(r, treemid)),
                   query(tree, idx * 2 + 2, treemid + 1, treer, max(l, treemid + 1), r));
}

void solve()
{ 
    int n,m;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)cin >> arr[i];
    int x = ceil(log2(n));
    int maxSize = 2 * (1 << x) - 1;
    vector<someData>tree(maxSize);
    buildSegTree(arr, 0, n-1, tree, 0);
    // debug...
    // int j=0;
    // for(someData i:tree)cout << j++ << " ---> " << i.sum << " " << i.prefixSum << " " << i.suffixSum << " " << i.ans << endl;
    cin >> m;
    vector<array<int,2>>q(m);
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        cout << query(tree, 0, 0, n-1, l-1 ,r-1).ans << endl;
    }
}

//
// output: 2
//

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
