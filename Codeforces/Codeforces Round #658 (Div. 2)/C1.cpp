#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;

void solve()
{ 
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    string str="";
    for(int i=0;i<n;i++)str+='1';
    vector<int>ans;
    int i=0;
    while(i<n){
        char c;
        if(a[i]=='1')c='1';
        else c='0';
        int j=i;
        while(j<n){
            if(a[j]!=c){
                break;
            }
            j++;
        }
        i=j;
        ans.emplace_back(i);
    }
    if(a[n-1]=='1')ans.pop_back();
    vector<int>sub;
    i=0;
    while(i<n){
        char c;
        if(b[i]=='1')c='1';
        else c='0';
        int j=i;
        while(j<n){
            if(b[j]!=c){
                break;
            }
            j++;
        }
        i=j;
        sub.emplace_back(i);
    }
    if(b[n-1]=='1')sub.pop_back();
    reverse(sub.begin(),sub.end());
    ans.insert(ans.end(),sub.begin(),sub.end());
    cout << ans.size() << " ";
    for(int i:ans)cout << i << " ";
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
