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

int arr[maxn];
int q[maxn];
int n,m;

bool check(int x)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<=x)
        {
            count++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(q[i]<0&&-1*q[i]<=count)
        {
            count--;
        }
        else if(q[i]>0&&q[i]<=x)
        {
            count++;
        }
    }
    return count>0;
}

void solve()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin >> q[i];
    }
    int l=1,r=n+1,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    if (l<=n)
    {
        cout << l << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}



//rewritten



// void update(int x,int val)
// {
//     while(x>0&&x<maxn)
//     {
//         arr[x]+=val;
//         x+=x&-x;
//     }
// }

// int sum(int x)
// {
//     int sum_mid=0;
//     while(x>0)
//     {
//         sum_mid+=arr[x];
//         x-=x&-x;
//     }
//     return sum_mid;
// }

// void solve()
// {
//     int x,count=0;
//     cin >> n >> m;
//     int q[m];
//     for(int i=0;i<n;i++)
//     {
//         cin >> x;
//         update(x,1);
//     }
//     for(int i=0;i<m;i++)
//     {
//         cin >> q[i];
//     }
//     for(int i=0;i<m;i++)
//     {
//         if(q[i]>0)
//         {
//             count--;
//             update(q[i],1);
//         }
//         else
//         {
//             count++;
//             x=-1*q[i];
//             int l=0,r=maxn;
//             while(l<r)
//             {
//                 int mid=(r+l)/2;
//                 if(sum(mid)<x)
//                 {
//                     l=mid+1;
//                 }
//                 else
//                 {
//                     r=mid;
//                 }
//             }
//             update(l,-1);
//         }
//     }
//     if(count==n)
//     {
//         cout << "0" <<endl;
//     }
//     else
//     {
//         for(int i=1;i<maxn;i++)
//         {
//             if(sum(i))
//             {
//                 cout << i << endl;
//                 break;
//             }
//         } 
//     }
// }
int main()
{
    fast;
    #ifdef TEST
	    freopen("input.txt","r", stdin);
    #endif
    ll t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
