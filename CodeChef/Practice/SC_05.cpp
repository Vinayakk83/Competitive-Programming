#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

void solve() {
    string str;
    cin >> str;
    bool c = true;
    ll idx;
    string ans1 = "", ans2 = "";
    for(ll i = 0; str[i]; i++) {
        if(str[i] == '7') {
            ans1 += '6';
            ans2 += '1';
            if(c) {
                idx = i;
            }
            c = false;
        }
        else{
            ans1 += str[i];
            ans2 += '0';
        } 
    }
    cout << ans1 << " " << string(ans2.begin() + idx, ans2.end()) << endl;
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