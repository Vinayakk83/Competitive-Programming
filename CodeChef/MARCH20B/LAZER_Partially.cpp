#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long int n,q;
        scanf("%ld %ld",&n,&q);
        long int arr[n];
        for(long int j=0;j<n;j++)
        {
            scanf("%ld",&arr[j]);
        }
        for(long int j=0;j<q;j++)
        {
            long int count=0;
            long int x1,x2,y;
            scanf("%ld %ld %ld",&x1,&x2,&y);
            for(long int k=x1;k<x2;k++)
            {
                if(arr[k-1]>y)
                {
                    if(arr[k]<=y)
                    {
                        count++;
                    }
                }
                else if(arr[k-1]<y)
                {
                    if(arr[k]>=y)
                    {
                        count++;
                    }
                }
                else
                {
                    count++;
                }
            }
            printf("%ld\n",count);
        }
    }
    return 0;
}