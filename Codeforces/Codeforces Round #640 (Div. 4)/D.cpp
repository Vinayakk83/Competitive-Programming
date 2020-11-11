#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
typedef map<ll ,ll> ml;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{ 
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    int i=0,j=n-1;
    int count=1,a=arr[i],b=0,x,y;
    //cout << a << " <-----> ";
    arr[i]=0;
    x=a;
    i++;
    while(true)
    {
        y=0;
        while(y<=x&&arr[j]!=0)
        {
            //cout << arr[j] << " ";
            y+=arr[j];
            arr[j]=0;
            j--;
        }
        b+=y;
        //cout << b << "  " << y << " <----> ";
        if(arr[j]==0)
        {
            if(y!=0)count++;
            break;
        }
        count++;
        x=0;
        while(x<=y&&arr[i]!=0)
        {
            //cout << arr[i] << " ";
            x+=arr[i];
            arr[i]=0;
            i++;
        }
        a+=x;
        //cout << a << "  " << x << " <----> ";
        if(arr[i]==0)
        {
            if(x!=0)count++;
            break;
        }
        count++;
    }
    //cout << endl;
    cout << count << " " << a << " " << b << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fast;
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
