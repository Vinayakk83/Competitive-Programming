#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long int n,q,m,even=0,odd=0;
        scanf("%ld %ld",&n,&q);
        long int arr[n];
        for(long int j=0;j<n;j++)
        {
            scanf("%ld",&arr[j]);
            m=arr[j];
            long int count = 0; 
            while(m) 
            { 
                m=m&(m-1); 
                count++;
            }
            if(count%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        long int z;
        for(long int j=0;j<q;j++)
        {
            scanf("%ld",&z);
            long int count = 0; 
            while(z) 
            { 
                z=z&(z-1); 
                count++;
            }
            if(count%2==0)
            {
                printf("%ld %ld\n",even,odd);
            }
            else
            {
                printf("%ld %ld\n",odd,even);
            }
        }
    }
    return 0;
}