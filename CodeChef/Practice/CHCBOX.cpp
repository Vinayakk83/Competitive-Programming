#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        long int arr[n];
        long int max=0;
        int flag=0;
        for(long int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        long int a,b,c,d;
        for(long int j=0;j<n;j++)
        {
            if(max==arr[j])
            {
                a=j;
                break;
            }
        }
        for(long int j=n-1;j>=0;j--)
        {
            if(max==arr[j])
            {
                b=j;
                break;
            }
        }
        c=b-a+1;
        if(c > n/2){
    		cout << 0 << endl;
    	}
    	else 
    	{

    		d=(n/2)-c+1;
    		cout << d << endl;
    	}
    }
    return 0;
}