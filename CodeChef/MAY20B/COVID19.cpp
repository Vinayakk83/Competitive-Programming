#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,x,y,count=1;
    vector<int>dist;
    cin>>n;
    cin>>x;
    for(int i=0;i<n-1;i++)
    {
        cin>>y;
        if(y-x <= 2)
        {
            count++;

        }
        else
        {
            dist.push_back(count);
            count=1;
        }
        x=y;
    }
    dist.push_back(count);
    /* for (int i = 0; i < dist.size(); i++) 
        cout << dist[i] << " "; 
    cout << endl; */
    cout<< *min_element(dist.begin(),dist.end()) << " " << *max_element(dist.begin(),dist.end()) << endl;
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