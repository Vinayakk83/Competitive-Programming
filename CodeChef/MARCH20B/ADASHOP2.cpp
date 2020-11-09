#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int r,c,count=49,flag=0;
        cin>>r>>c;
        if(r==c)
        {
            if(r!=1)
            {
                flag=1;
                count++;
                cout<<count<<endl;
                cout<<1<<" "<<1<<endl;
            }
        }
        else
        {
            flag=1;
            count=count+2;
            r=r+c;
            r=r/2;
            cout<<count<<endl;
            cout<<r<<" "<<r<<endl;
            cout<<1<<" "<<1<<endl;
        }
        if(flag==0)
        {
            cout<<count<<endl;
        }
        for(int i=1;i<6;i=i+2)
        {
            for(int j=1;j<8;j=j+2)
            {
                cout<<j+1<<" "<<i+1<<endl;
                if(j+2<9)
                {
                    cout<<j+2<<" "<<i<<endl;
                }
            }
            for(int j=6;j>=0;j=j-2)
            {
                cout<<j+1<<" "<<i+2<<endl;
                if(j>0)
                {
                    cout<<j<<" "<<i+1<<endl;
                }
            }
        }
        int i=7;
        for(int j=1;j<8;j=j+2)
            {
                cout<<j+1<<" "<<i+1<<endl;
                if(j+2<8)
                {
                    cout<<j+2<<" "<<i<<endl;
                }
            }
    }
    return 0;
}