#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;
int block, Count;
vector<int>mp(N), arr(N);

struct someData {
    int l, r, idx;
};

void Add(int i) {
    mp[arr[i]]++;
    Count += (mp[arr[i]] == 1);
}

void Sub(int i) {
    mp[arr[i]]--;
    Count -= (mp[arr[i]] == 0);
}

void solve()
{
    int n, q;
    cin >> n;
    block = sqrt(n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    cin >> q;
    vector<someData>query(q);
    for(int i = 0;i < q;i++) {
        cin >> query[i].l >> query[i].r;
        query[i].l--,query[i].r--;
        query[i].idx = i;
    }
    sort(query.begin(), query.end(), [](someData a, someData b) {
        if(a.l/block != b.l/block) return a.l/block < b.l/block;
        else return a.r < b.r;
    });
    
    // debug...
    // for(someData i:query)cout << i.l << " " << i.r << " " << i.idx << endl;
    
    vector<int>ans(q);
    for(int i = query[0].l;i <= query[0].r;i++)Add(i);
    ans[query[0].idx] = Count;
    int left = query[0].l, right = query[0].r;
    for(int i = 1;i < q;i++) {
        while(left < query[i].l) Sub(left), left++;
        while(left > query[i].l) left--, Add(left);
        while(right > query[i].r) Sub(right), right--;
        while(right < query[i].r) right++, Add(right);
        ans[query[i].idx] = Count;
    }
    for(int i:ans) cout << i << " ";
    cout << endl;
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

