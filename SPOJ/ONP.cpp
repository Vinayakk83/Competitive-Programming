#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;

void solve()
{
    string s, ans = "";
    stack<char> ST;
    cin >> s;
    for( int i = 0; i < s.length(); i++) {
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') 
            ST.push(s[i]);
        else if(s[i] == ')') {
            ans += ST.top();
            ST.pop();
            ST.pop();
        }
        else ans += s[i];
    }
    cout << ans << endl;
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
    while(t--)
    {
        solve();
    }
    return 0;
}

