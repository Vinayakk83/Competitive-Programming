#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        int m;
        long int n,k,l=0,sum=0;
        cin>>n;
        cin>>k;
        long int arr[n]={0};
        for(long int j=0;j<n-1;j++)
        {
            scanf("%ld",&arr[j]);
            if(arr[j]<k)
            {
                sum+=arr[j];
            }
            else
            {
                m=arr[j]/k;
                sum+=(arr[j]-k*m);
                //cout<<m<<" "<<sum<<endl;
            }
            //l+=arr[j];
        }
        scanf("%ld",&arr[n-1]);
        //l+=arr[n-1];
        //if(k==2)
        if((arr[n-1]+sum)%k==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(arr[n-1]+sum>k)
            {
                m=(arr[n-1]+sum)/k;
                sum=sum+arr[n-1]-m*k;
            }
            else
            {
                sum+=arr[n-1];
            }
            cout<<sum<<endl;
        }
        //cout<<m<<endl;
        //sum-=k*m;
    }
    return 0;
}