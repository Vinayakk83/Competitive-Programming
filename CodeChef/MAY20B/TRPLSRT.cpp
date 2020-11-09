#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n,k,i,j,l,count=0;
    ll m=0,c,x0,x1,x2;
    cin>>n>>k;
    ll arr3[3]={0};
    ll arr2[3]={0};
    ll arr1[n];
    vector<ll>ans;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    i=1;
    bool flag1=false,flag2;
    while (i<=n)
    {
        if(m>k)
        {
            cout<<"-1"<<endl;
            flag1=true;
            break;
        }
        if(i==arr1[i-1])
        {
            i++;
        }
        else
        {
            arr2[0]=i;
            j=arr1[i-1];
            arr2[1]=j;
            j=arr1[j-1];
            if(i==j)
            {
                arr2[2]=arr1[i-1];
                l=i+1;
                flag2=false;
                while (l<=n)
                {
                    if(l==arr1[i-1] || l==arr1[l-1])
                    {
                        l++;
                    }
                    else
                    {
                        arr3[0]=l;
                        c=arr1[l-1];
                        arr3[1]=c;
                        c=arr1[c-1];
                        if(l!=c)
                        {
                            arr3[2]=c;
                            ans.push_back(arr3[0]);
                            ans.push_back(arr3[1]);
                            ans.push_back(arr3[2]);
                            x0=arr1[arr3[0]-1];
                            x1=arr1[arr3[1]-1];
                            x2=arr1[arr3[2]-1];
                            arr1[arr3[0]-1]=x2;
                            arr1[arr3[1]-1]=x0;
                            arr1[arr3[2]-1]=x1;
                            count+=3;
                            m++;
                            continue;
                        }
                        arr2[1]=l;
                        flag2=true;
                        break;
                    }   
                }
                if(flag2==false)
                {
                    cout<<"-1"<<endl;
                    flag1=true;
                    break;
                }
            }
            else
            {
                arr2[2]=j;
            }
            ans.push_back(arr2[0]);
            ans.push_back(arr2[1]);
            ans.push_back(arr2[2]);
            x0=arr1[arr2[0]-1];
            x1=arr1[arr2[1]-1];
            x2=arr1[arr2[2]-1];
            arr1[arr2[0]-1]=x2;
            arr1[arr2[1]-1]=x0;
            arr1[arr2[2]-1]=x1;
            count+=3;
            m++;
        }
    }
    if(flag1==false)
    {
        cout<<m<<endl;
        for(i=0;i<count;i+=3)
        {
            cout<<ans[i]<<" "<<ans[i+1]<<" "<<ans[i+2]<<endl;
        }
    }
}

int main()
{
    fast;
    /* #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif */
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}