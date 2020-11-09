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
        int n,k,count1=0,count2=0,count3=0;
        cin>>n>>k;
        char arr[n];
        for(int j=0;j<n-k;j++)
        {
            cin>>arr[j];
            if(arr[j]=='H')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        for(int k=count1+count2;k<n;k++)
        {
            cin>>arr[k];
        }
        for(int k=n-1;k>=count1+count2;k--)
        {
            if(arr[k]=='H')
            {
                count3++;
                for(int l=count1+count2;l<=k-1;l++)
                {
                    if(arr[l]=='H')
                    {
                        arr[l]='T';
                    }
                    else
                    {
                        arr[l]='H';
                    }
                }
            }
        }
        if(count3%2==0)
        {
            cout<<count1<<endl;
        }
        else
        {
            cout<<count2<<endl;
        }
    }
    return 0;
}