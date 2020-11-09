#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

void solve() {
    int n, x, p, k;
    cin >> n >> x >> p >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    if(x == arr[p - 1]) {
        cout << "0" << endl;
        return;
    }
    vector<int> :: iterator idx;
    if((p < k && x > arr[p - 1]) || (p > k && x < arr[p - 1])) {
        cout << "-1" << endl;
    }
    else {
        if(x < arr[p - 1]) {
            idx = upper_bound(arr.begin(), arr.end(), x);
            cout << p - (idx - arr.begin()) << endl;
        }
        else {
            idx = lower_bound(arr.begin(), arr.end(), x);
            cout << (idx - arr.begin()) - p + 1 << endl;
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
    cin >> t;
    // t = 1;
    while(t--) {
        solve();
    }
    return 0;
}