#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        int n,m;
        cin>>n;
        vector<int>c;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            if(m==1)
            {
                c.push_back(i+1);
            }
        }
        for(int i=1;i<c.size();i++)
        {
            if(c[i]-c[i-1]<6)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}