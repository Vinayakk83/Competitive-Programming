#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k,c=0,c1=0,a=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    sort(arr,arr+n);
	    a=arr[k-1];
	    for(int m=0;m<n;m++)
	    {
	        if(arr[m]==a)
	        {
	            c++;
	        }
	        if(m<k && arr[m]==a)
	        {
	            c1++;
	        }
	    }
	    long long b=1;
	    if(c1>c-c1)
	    {
	        c1=c-c1;
	    }
	    for(int j=0;j<c1;j++)
	    {
	        b*=(long long)(c-j);
	        b/=(long long)(j+1);
	    }
	    cout<<b<<endl;
	}
	return 0;
}