#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long int n,sum=0;
		scanf("%ld",&n);
		long int arr1[n],arr2[n];
		for(long int j=0;j<n;j++)
			scanf("%ld",&arr1[j]);
		for(long int j=0;j<n;j++)
			scanf("%ld",&arr2[j]);
		sort(arr1,arr1+n);
		sort(arr2,arr2+n);
		for(long int j=0;j<n;j++)
		{
			if(arr1[j]>=arr2[j])
				sum+=arr2[j];
			else
				sum+=arr1[j];
		}
		printf("%ld\n",sum);
	}
	return 0;
}
