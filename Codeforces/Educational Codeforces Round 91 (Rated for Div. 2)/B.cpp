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
    string s;
    cin >> s;
    int arr[3]={0};
    for(int i=0;s[i];i++)
    {
        if(s[i]=='R')arr[0]++;
        else if(s[i]=='P')arr[1]++;
        else arr[2]++;
    }
    string c;
    int n=0,j;
    for(int i=0;i<3;i++)
    {
        if(n<=arr[i])
        {
            n=arr[i];
            j=i;
        }
    }
    for(int i=0;s[i];i++)
    {
        if(j==0)c+='P';
        else if(j==1)c+='S';
        else c+='R';
    }
    cout << c << endl;
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
