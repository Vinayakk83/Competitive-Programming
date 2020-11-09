#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n,x,c1=0,c2=0;
        cin>>n;
        for(long int j=0;j<n;j++)
        {
            cin>>x;
            if(x%2==0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        c1=c1*c2;
        cout<<c1<<endl;
    }
}