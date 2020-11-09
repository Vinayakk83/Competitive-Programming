#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll ,ll> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxn 1000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    //fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int n,p,x,x1,z;
        cin >> n >> p;
        int arr[n][n];
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                arr[i-1][j-1]=0;
            }
        }
        bool flag=false;
        int sum1=0,sum2=0,count1;
        for(int i=1;i<n;i++)
        {
            bool flag1=false;
            count1=0;
            for(int j=1;j<i;j++)
            {
                if (arr[i-1][j-1]==1)
                {
                    count1++;
                }
            }   
            if (i-1>0)
            {
                for(int j=1;j<n+1;j++)
                {
                    if (arr[i-1-1][j-1]==1)
                    {
                        sum1++;
                    }
                }
            }
            cout << "1 1 1 " << i << " " << n << endl;
            cin >> x;
            if (x==-1)
            {
                flag=true;
                break;
            }
            x=x-(count1+sum1);
            z=n-i+1;
            if (x==z)
            {
                for(int j=i;j<n+1;j++)
                {
                    arr[i-1][j-1]=1;
                }
                flag1=true;
            }
            if (x==0 && flag1==false)
                flag1=true;
            x1=x;
            z--;
            if (flag1==false)
            {
                int s1=0;
                for(int j=n-1;j>i-1;j--)
                {
                    for(int k=1;k<i;k++)
                    {
                        if (arr[k-1][j]==1)
                        {
                            s1++;
                        }
                    }
                    cout << "1 1 1 " << i << " " << j << endl;
                    cin >> x;
                    if (x==-1)
                    {
                        flag=true;
                        break;
                    }
                    x=x-(count1+sum1-s1);
                    if (x==z)
                    {
                        for(int k=i;k<z+i;k++)
                        {
                            arr[i-1][k-1]=1;
                        }
                        break;
                    }
                    if (x<x1)
                    {
                        arr[i-1][j]=1;
                        x1=x;
                    }
                    if (x==0)
                    {
                        break;
                    }
                    z--;
                }
            }  
            if (flag==true)
            {
                break;
            }

            count1=0;
            for(int j=1;j<i+1;j++)
            {
                if (arr[j-1][i-1]==1)
                {
                    count1++;
                }
            }
            if (i-1>0)
            {
                for(int j=1;j<n+1;j++)
                {
                    if (arr[j-1][i-1-1]==1)
                    {
                        sum2++;
                    }
                }
            }
            cout << "1 1 1 " << n << " " << i << endl;
            cin >> x;
            if (x==-1)
            {
                flag=true;
                break;
            }
            x=x-(count1+sum2);
            z=n-i;
            if (x==z)
            {
                for(int j=i+1;j<n+1;j++)
                {
                    arr[j-1][i-1]=1;
                }
                continue;
            }
            if (x==0)
            {
                continue;
            }
            x1=x;
            z--;
            int s2=0;
            for(int j=n-1;j>i;j--)
            {
                for(int k=1;k<i;k++)
                {
                    if (arr[j][k-1]==1)
                    {
                        s2++;
                    }
                }
                cout << "1 1 1 " << j << " " << i << endl;
                cin >> x;
                if (x==-1)
                {
                    flag=true;
                    break;
                }
                x=x-(count1+sum2-s2);
                if (x==z)
                {
                    for(int k=i+1;k<z+i+1;k++)
                    {
                        arr[k-1][i-1]=1;
                    }
                    break;
                }
                if (x<x1)
                {
                    arr[j][i-1]=1;
                    x1=x;
                }
                if (x==0)
                {
                    break;
                }
                z--;
            }
            if (flag==true)
            {
                break;
            }
        }   
        if (flag==true)
        {
            break;
        }
        count1=0;
        for(int j=1;j<n;j++)
        {
            if (arr[n-1][j-1]==1)
            {
                count1++;
            }
        }
        for(int j=1;j<n+1;j++)
        {
            if (arr[n-1-1][j-1]==1)
            {
                sum1++;
            }
        }
        cout << "1 1 1 " << n << " " << n << endl;
        cin >> x;
        if (x==-1)
        {
            break;
        }
        x=x-(count1+sum1);
        if (x==1)
        {
            arr[n-1][n-1]=1;
        }
        cout << "2" << endl;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                cout << arr[i-1][j-1] << " ";
            }
            cout << endl;
        }
        cin >> x;
        if (x==-1)
        {
            break;
        }
    }
}