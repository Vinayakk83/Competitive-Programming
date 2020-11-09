#include <bits/stdc++.h>
int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,p,flag=0;
	    int k;
	    scanf("%d %d",&n,&p);
	    long int arr[n],arr1[n]={0};
	    for(int j=0;j<n;j++)
	    {
	        scanf("%ld",&arr[j]);
	    }
	    if(arr[n-1]>p)
	    {
	        arr1[n-1]=1;
	        flag=1;
	    }
	    else
	    {
	        if(p%arr[n-1]==0)
	        {
	            for(int j=n-1;j>0;j--)
	            {
	                if(arr[j]%arr[j-1]!=0)
	                {
	                    flag=1;
	                    k=j;
	                    break;
	                }
	            }
	            if(flag==1)
	            {
	                for(int j=n-1;j>0;j--)
	                {
	                    if(arr[j]%arr[j-1]!=0)
	                    {
	                        arr1[j]=p/arr[j]-1;
	                        arr1[j-1]=(int(arr[j]/arr[j-1])+1);
	                        flag=1;
	                        break;
	                    }
	                }
	            }
	            else
	            {
	                printf("NO\n");
	                flag=0;
	            }
	        }
	        else
	        {
	            arr1[n-1]=int(p/arr[n-1])+1;
	            flag=1;
	        }
	    }
	    if(flag==1)
	    {
	        printf("YES");
            for(int j=0;j<n;j++)
            {
                printf(" %ld",arr1[j]);
            }
            printf("\n");
	    }
	}
	return 0;
}
