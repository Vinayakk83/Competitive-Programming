#include <stdio.h>

int main(void) {
	int arr[1000],T,sum,x,y,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<T;i++)
	{
	    sum=0;
	    y=arr[i];
	    while(y>0)
	    {
	        x=y%10;
	        y=y/10;
	        sum+=x;
	    }
	printf("%d\n",sum);
	}
	return 0;
}

