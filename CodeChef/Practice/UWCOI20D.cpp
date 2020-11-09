#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,ans=0;
        cin>>n;
        int arr[n];
        string str;
        for(int j=0;j<n;j++)
        {
            cin>>str;
            arr[j]=str.find("1");
        }
        /*ans=n+1;
        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        */for(int j=0;j<n;j++)
        {
            int min1 = INT_MAX;
		    int max1 = INT_MIN;
            for(int k=j;k<n;k++)
            {
                min1 = min(min1, arr[k]);
    			max1 = max(max1, arr[k]);
    			if(max1-min1==k-j)
    			{
    				ans++;
    			}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}