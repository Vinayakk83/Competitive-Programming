#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,a1,a2,b1,b2;
        cin>>a>>b;
        c=a+b;
        a1=a/10;
        a2=a%10;
        b1=b/10;
        b2=b%10;
        if(a>9 && b>9)
        {
            if(a1*10+b1+a2*10+b2>c)
            {
                c=a1*10+b1+a2*10+b2;
            }
            if(a1*10+b2+b1*10+a2>c)
            {
                c=a1*10+b2+b1*10+a2;
            }
            if(b1*10+a2+a1*10+b2>c)
            {
                c=a1*10+b2+b1*10+a2;
            }
            if(b2*10+a2+b1*10+a1>c)
            {
                c=b2*10+a2+b1*10+a1;
            }
        }
        else if(a<10 && b>9)
        {
            if(a2>b1)
            {
                c=a2*10+b2+b1;
            }
        }
        else if(a>9 && b<10)
        {
            if(b2>a1)
            {
                c=b2*10+a2+a1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}