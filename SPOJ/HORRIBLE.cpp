#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

ll midIndex(ll l, ll r){
    return l + (r - l) / 2;
}

void updateRange(vector<ll> &tree, vector<ll> &lazy, ll idx, ll lTree, ll rTree, ll left, ll right, ll value){
    if(lazy[idx] != 0){
        tree[idx] += (rTree - lTree + 1) * lazy[idx];
        if(lTree != rTree){
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if((lTree > rTree) || (lTree > right) || (rTree < left)) return ;
    if((left <= lTree) && (right >= rTree)){
        tree[idx] += (rTree - lTree + 1) * value;
        if(lTree != rTree){
            lazy[2 * idx + 1] += value;
            lazy[2 * idx + 2] += value;
        }
        return ;
    }

    ll mid = midIndex(lTree, rTree);
    updateRange(tree, lazy, 2 * idx + 1, lTree, mid, left, right, value);
    updateRange(tree, lazy, 2 * idx + 2, mid + 1, rTree, left, right, value);

    tree[idx] = tree[2 * idx + 1] + tree[2 * idx + 2];
}

ll getSum(vector<ll> &tree, vector<ll> &lazy, ll idx, ll lTree, ll rTree, ll left, ll right){
    if(lazy[idx] != 0){
        tree[idx] += (rTree - lTree + 1) * lazy[idx];
        if(lTree != rTree){
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if((lTree > rTree) || (lTree > right) || (rTree < left)) return 0;
    
    if((lTree >= left) && (rTree <= right)) return tree[idx];

    ll mid = midIndex(lTree, rTree);
    return getSum(tree, lazy, 2 * idx + 1, lTree, mid, left, right) + getSum(tree, lazy, 2 * idx + 2, mid + 1, rTree, left, right);
}

// Output:
// 80
// 508

void solve()
{
    ll n, c;
    cin >> n >> c;
    int x = ceil(log2(n));
    int maxSize = 2 * (1 << x) - 1;
    vector<ll>tree(maxSize), lazy(maxSize);
    for(int i = 0;i < c;i++){
        int flag;
        ll left, right, value;
        cin >> flag >> left >> right;
        if(!flag){
            cin >> value;
            updateRange(tree, lazy, 0, 0, n-1, left-1, right-1, value);
            
            // debug...
            // for(ll i:tree)cout << i << " ";
            // cout << endl;
            // for(ll i:lazy)cout << i << " ";
            // cout << endl;

        }
        else{
            cout << getSum(tree, lazy, 0, 0, n-1, left-1 ,right-1) << endl;
        }
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
    string s;
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

