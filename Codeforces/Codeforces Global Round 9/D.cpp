#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N=1e6+1;

void solve()
{ 
    int n;
    cin >> n;
    vector<int>a(n),arr(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        arr[a[i]]++;
    }
    vector<int>ans;
    while(true)
    {
        int i,j;
        for(i=0;i<n&&a[i]==i;i++);
        if(i==n)break;
        for(j=0;arr[j];j++);
        if (j==n)
        {
            int k;
            for(k=0;a[k]!=i;k++);
            ans.emplace_back(k+1);
            arr[a[k]]--;
            arr[n]++;
            a[k]=n;
        }
        else
        {
            arr[a[j]]--;
            arr[j]++;
            a[j]=j;
            ans.emplace_back(j+1);
        }
    }
    cout << ans.size() << endl;
    for(int i:ans)cout << i << " ";
    cout << endl;
    // for(int i:a)cout << i << " ";
    // cout << endl;
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
    return 0;
}
