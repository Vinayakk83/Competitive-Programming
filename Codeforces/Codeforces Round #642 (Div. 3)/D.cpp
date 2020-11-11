#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n ,j ,mid;
    cin >> n;
    int arr[n]={0};
    priority_queue< pair<int ,pi> >p;
    p.push(make_pair(n,make_pair(-1,n)));
    //cout<<p.top().first;
    for(int i=1;i<=n;i++)
    {
        j=p.top().second.second+(-1*p.top().second.first);
        //cout<<j<<endl;
        if(p.top().first&1)
        {
            mid=j>>1;
            arr[mid-1]=i;
        }
        else
        {
            j=j-1;
            mid=j>>1;
            arr[mid-1]=i;
        }
        p.push(make_pair(mid-(-1*p.top().second.first),make_pair(p.top().second.first,mid-1)));
        p.push(make_pair(p.top().second.second-mid,make_pair(-1*(mid+1),p.top().second.second)));
        p.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}
