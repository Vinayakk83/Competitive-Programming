#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int f[n],p[n];
        for(int j=0;j<n;j++)
        {
            cin>>f[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>p[j];
        }
        int arr[m]={0};
        for(int j=1;j<=m;j++)
        {
            int flag=0;
            for(int k=0;k<n;k++)
            {
                if(j==f[k])
                {
                    arr[j-1]+=p[k];
                    flag=1;
                }
            }
            if(flag==0)
            {
                arr[j-1]=-1;
            }
        }
        int min=INT_MAX;
        for(int j=0;j<m;j++)
        {
            if(min>arr[j] && arr[j]!=-1)
            {
                min=arr[j];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}