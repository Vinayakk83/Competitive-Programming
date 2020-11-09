#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,i;
	cin>>t;
	int arr[]={6,2,5,5,4,5,6,3,7,6};
	for(i=0;i<t;i++)
	{
	    int a,b,sum,count=0;
	    cin>>a>>b;
	    sum=a+b;
	    while(sum!=0)
	    {
	        a=sum%10;
	        count+=arr[a];
	        sum/=10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}