#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n,x1,x2;
        cin>>n;
        cin>>x1;
        for(long int j=1;j<n;j++)
        {
            cin>>x2;
            if(x1<x2)
            {
                x1=x2;
            }
        }
        cout<<x1<<endl;
    }
}