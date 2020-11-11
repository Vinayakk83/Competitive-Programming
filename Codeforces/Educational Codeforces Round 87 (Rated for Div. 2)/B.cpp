#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    string str;
    cin >> str;
    int a=-1 ,b=-1 ,c=-1;
    int slen=200001,x;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='1')
        {
            a=i+1;
        }
        else if(str[i]=='2')
        {
            b=i+1;
        }
        else
        {
            c=i+1;
        }
        //cout<<a<<" "<<b<<" "<<c<<" ";
        if(a!=-1&&b!=-1&&c!=-1) 
        {
            x=max(a,max(b,c))-min(a,min(b,c))+1;
            if(slen>x)
            {
                slen=x;
            }
        }
    }
    if(a==-1||b==-1||c==-1)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << slen << endl;
    }
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
