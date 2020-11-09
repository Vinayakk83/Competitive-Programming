#include <bits/stdc++.h>
typedef long long int ll;
#define MAX1 10001
using namespace std;

vector<vector<pair<int,int> > > c(MAX1);

void solve1()
{
    for(int i=2;i<MAX1;i++)
    {
        int x=i;
        for(int j=2;j*j<=x;j++)
        {
            if(x%j==0)
            {
                int count=0;
                while(x%j==0 && x>0)
                {
                    x/=j;
                    count++;
                }
                c[i].push_back({j,count});
            }
        }
        if(x>1)
        {
            c[i].push_back({x,1});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve1();
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        vector<int> x(m+1,0);
        for(int j=0;j<n;j++)
        {
            for(auto k:c[arr[j]])
            {
                x[k.first]=max(x[k.first],k.second);
            }
        }
        int mul=1,z=1;
        for(int j=2;j<m+1;j++)
        {
            int y=1;
            for(auto k:c[j])
            {
                if(k.second>x[k.first])
                {
                    y*=pow(k.first,k.second-x[k.first]);
                }
            }
            if(y>mul)
            {
                mul=y;
                z=j;
            }
        }
        cout<<z<<endl;
    }
    return 0;
}