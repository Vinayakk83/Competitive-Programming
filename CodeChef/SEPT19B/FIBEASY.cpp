#include <math.h>
#include <iostream>
using namespace std;
int main() {
	int arr1[300];
		arr1[0]=0;
		arr1[1]=1;
		for(int i=2;i<300;i++)
		{
			arr1[i]=(arr1[i-1]+arr1[i-2])%10;
		}
	long t,j;
	long long n,p;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		j=0;
		cin>>n;
		while(n>0)
		{
			n=n/2;
			j++;
		}
		p=(long long)pow(2,j-1)-1;
	    cout<<arr1[p%300]<<endl;
	}
	
	return 0;
}