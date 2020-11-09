#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pr(int n,int r)
{
    if (n==r)
     	return 1;
    if (r==1)
     	return n;
    return (pr(n-1,r) + pr(n-1,r-1));
}
     
int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        int count0=0;
        int count1=0;
        for(int j=0;j<n;j++)
        {
            if (arr[j]==0)
			    count0++;
		    else if(arr[j]==2)
			    count1++;
        }
		if (count0>1 && count1>1)
		    cout<<pr(count0,2)+pr(count1,2)<<endl;
    	else if (count0>1)
    		cout<<pr(count0,2)<<endl;
    	else if (count1>1)
    		cout<<pr(count1,2)<<endl;
    	else
    		cout<<0<<endl;
    		}
	return 0;
}