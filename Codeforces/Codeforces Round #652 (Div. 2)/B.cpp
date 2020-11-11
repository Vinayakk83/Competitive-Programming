#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    string str,sub1="",sub2="";
    cin >> str;
    int i=0;
    while(i<n)
    {
        if(str[i]=='1')break;
        sub1+='0';
        i++;
    }
    int j=n-1;
    while(j>i-1)
    {
        if(str[j]=='0')
        {
            sub2+='0';
            break;
        }
        sub2+='1';
        j--;
    }
    reverse(sub2.begin(),sub2.end());
    cout << sub1+sub2 << endl;
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
    //t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
