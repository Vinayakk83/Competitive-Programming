#include <iostream>
#include<string.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int count,k,c; 
		count=0;
		int p;
		cin>>p;
		string arr[p];
		for(int j=0;j<p;j++)
		{
			cin>>arr[j];
			
		}
		for(int j=0;j<10;j++)
		{
			c=0;
			for(int m=0;m<p;m++)
		
			{ 
			    if(arr[m][j]=='1')
			    {
			    	c++;
			    }
			}
			
			if(c%2!=0)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}