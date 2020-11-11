#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int ,int> pi;
typedef pair<ll ,ll> pl;
#define modulo 1000000007
#define maxN 10000001
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{ 
    int n;
    string str;
    cin >> str >> n;
    int arr[n];
    string ans(n,'?');
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(str.begin(),str.end());
    map<int ,int>mi;
    for(int i=0;i<str.length();i++)mi[str[i]-'a']++;

    // map<int ,int>::iterator itr;
    // for( itr=mi.begin();itr!=mi.end();itr++)cout << itr->first << " " << itr->second << endl;
    
    int count,j=str.length()-1;
    while(true)
    {
        count=0;
        vector<int>zero;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
                zero.emplace_back(i);
            }
        }
        if(count==0)break;
        while(mi[str[j]-'a']<count)
        {
            j=j-mi[str[j]-'a'];
        }
        //cout << j << " ";
        int k=j;
        j=j-mi[str[j]-'a'];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                ans[i]=str[k];
                k--;
                arr[i]=-1;
            }
            else
            {
                for(int l=0;l<zero.size();l++)arr[i]=arr[i]-abs(i-zero[l]);
            }
        }
    }
    cout << ans << endl;
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
