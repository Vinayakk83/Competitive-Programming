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
        int n;
        bool flag=false;
        ll count=0,odd=0,k=0,num,x;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                if(flag==false)
                {
                    odd=i-k;
                    k=i+1;
                    flag=true;
                }
                else
                {
                    if(arr[k-1]%4==0)
                    {
                        num=odd+1;
                        x=n-k;
                        odd=i-k;
                        k=i+1;
                    }
                    else
                    {
                        num=odd;
                        x=n-i;
                        count+=x;
                        odd=i-k;
                        k=i+1;
                    }
                    while(num)
                    {
                        count+=(num+x);
                        num-=1;
                    }
                }  
            }
        }
        if(k==n)
        {
            if(arr[k-1]%4==0)
            {
                num=odd+1;
            }
            else
            {
                num=odd;
            }
            while(num)
            {
                count+=num;
                num-=1;
            }
        }
        else
        {
            if(arr[k-1]%4==0)
            {
                num=odd+n-k+1;
            }
            else
            {
                while(odd)
                {
                    count+=odd;
                    odd-=1;
                }
                num=n-k;
            }
            while(num)
            {
                count+=num;
                num-=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}