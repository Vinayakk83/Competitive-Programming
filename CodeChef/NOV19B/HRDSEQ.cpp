#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,flag,count;
		cin>>n;
		int arr[n];
		arr[0]=arr[1]=count=0;
		for(int j=2;j<n;j++)
		{
			flag=0;
			for(int k=j-2;k>=0;k--)
			{
				if(arr[k]!=arr[j-1])
				{
					flag=1;
				}
				else
				{
					arr[j]=j-k-1;
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				arr[j]=0;
			}
		}
		for(int j=0;j<n;j++)
		{
			if(arr[j]==arr[n-1])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}