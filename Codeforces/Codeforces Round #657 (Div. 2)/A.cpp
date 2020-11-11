#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

const int N=1e6+1;
string CheckStr="abacaba";

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int CountStr=0;
    bool Flag;
    for(int i=0;i<n-6;i++){
        Flag=true;
        if(string(s.begin()+i,s.begin()+i+7)!=CheckStr)Flag=false;
        if(Flag){
            CountStr++;
            if(CountStr>1){
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(CountStr){
        cout << "YES" << endl;
        for(int i=0;i<n;i++)
            if(s[i]=='?')s[i]='z';
        cout << s << endl;
    }
    else{
        for(int i=0;i<n-6;i++){
            Flag=true;
            for(int j=i,k=0;j<i+7;j++,k++){
                if(s[j]!=CheckStr[k]&&s[j]!='?'){
                    Flag=false;
                    break;
                }
            }
            if(Flag){
                string Curr;
                Curr=string(s.begin(),s.begin()+i);
                Curr+=CheckStr;
                Curr+=string(s.begin()+i+7,s.end());
                bool Check;
                CountStr=0;
                for(int j=0;j<n-6;j++){
                    Check=true;
                    if(string(Curr.begin()+j,Curr.begin()+j+7)!=CheckStr)Check=false;
                    if(Check)CountStr++;
                }
                if(CountStr==1){
                    cout << "YES" << endl;
                    for(int j=0;j<n;j++)
                        if(Curr[j]=='?')Curr[j]='z';
                    cout << Curr << endl;
                    return;
                } 
            }
        }
        cout << "NO" << endl;
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
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
