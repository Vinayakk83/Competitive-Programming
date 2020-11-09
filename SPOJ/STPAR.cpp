#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5+1;

void solve()
{
    int n;
    cin >> n;
    while(n)
    {
        vector<int>arr(n);
        stack<int> order;
        int counter = 1;
        bool flag = true;
        for(int i = 0;i < n;i++) cin >> arr[i];
        for(int i = 0;i < n;i++){
            while(!order.empty() && order.top() == counter){
                counter++;
                order.pop();
            }
            if(arr[i] == counter) counter++;
            else if(!order.empty() && arr[i] > order.top()){
                flag = false;
                break;
            }
            else{
                order.push(arr[i]);
            }
        }
        if(flag)cout << "yes" << endl;
        else cout << "no" << endl;
        cin >> n;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    swift;
    int t;
    string s;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

