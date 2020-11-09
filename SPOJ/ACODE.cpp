#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
const int N=1e6+1;
 
// output:-
 
// 6
// 89
// 1
 
void solve()
{ 
    while(true)
    {
        string str;
        cin >> str;
        if(str[0]=='0')break;
        vector<ll>a(str.size()+1);
        a[0]=1;
        a[1]=1;
        for(int i=2;i<=str.size();i++)
        {
            char ch1,ch2;
            ch1=str[i-2]-'0';
            ch2=str[i-1]-'0';
            if(ch1==1||(ch1==2&&ch2<=6))a[i]+=a[i-2];
            if(ch2!=0)a[i]+=a[i-1];
            //cout << a[i] << " ";
        }
        cout << a[str.size()] << endl;
    }
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
