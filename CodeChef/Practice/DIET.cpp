#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,flag,k,a,b,sum;
		flag=a=b=sum=0;
		cin>>n>>k;
		int arr[n+1]={0};
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		for(int j=0;j<n;j++)
		{
		    if(arr[j]>=k)
		    {
		        b=arr[j]-k;
		        arr[j+1]+=b;
		    }
		    else
		    {
		        flag=1;
		        a=j;
		        break;
		    }
		}
		if(flag==1)
		{
			cout<<"NO "<<a+1<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}