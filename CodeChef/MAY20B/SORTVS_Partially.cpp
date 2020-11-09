#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,m,x,y,i,k;
    cin>>n>>m;
    int arr[n];
    vector< pair <int,int> > vect;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
        vect.push_back(make_pair(x,y));
    }
    i=1;
    int count=0;
    bool flag;
    while(i<n)
    {
        if(i==arr[i-1])
        {
            i++;
        }
        else
        {
            flag=false;
            k=arr[i-1];
            while(1)
            {
                x=arr[k-1];
                if(i==x)
                {
                    swap(arr[i-1],arr[k-1]);
                    for(int j=0;j<m;j++)
                    {
                        if((vect[j].first==i && vect[j].second==k)||(vect[j].second==i && vect[j].first==k))
                        {
                            flag=true;
                            break;
                        }
                    }
                    if(flag!=true)
                    {
                        count++;
                    }
                    break;
                }
                k=arr[x-1];
            }
        }
    }
    cout<<count<<endl;
}

int main()
{
    fast;
    /*  #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif  */
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}