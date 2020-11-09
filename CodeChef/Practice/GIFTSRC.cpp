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
        int n,l=0,r=0,u=0,d=0,x=0,y=0;
        cin>>n;
        string str;
        cin>>str;
        for(int j=0;j<n;j++)
        {
            if(str[j]=='L' && l==0)
            {
                x-=1;
                l=1;
                r=1;
                u=0;
                d=0;
            }
            else if(str[j]=='R' && r==0)
            {
                x+=1;
                l=1;
                r=1;
                u=0;
                d=0;
            }
            else if(str[j]=='U' && u==0)
            {
                y+=1;
                l=0;
                r=0;
                u=1;
                d=1;
            }
            else if(str[j]=='D' && d==0)
            {
                y-=1;
                l=0;
                r=0;
                u=1;
                d=1;
            }
        }
        cout<<x<<" "<<y<<endl; 
    }
    return 0;
}