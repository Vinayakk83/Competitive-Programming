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
    vector<string>puzzle(9);
    for(int i=0;i<9;i++)cin >> puzzle[i];
    for(int i=0,k=0;i<9;i+=3,k++){
        puzzle[i][k]=puzzle[i][((k+1)%3==0)?0:k+1];
        puzzle[i+1][k+3]=puzzle[i+1][((k+4)%6==0)?3:k+4];
        puzzle[i+2][k+6]=puzzle[i+2][((k+7)%9==0)?6:k+7];
    }
    for(int i=0;i<9;i++)cout << puzzle[i] << endl;
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
