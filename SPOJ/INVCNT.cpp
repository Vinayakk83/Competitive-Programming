#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

ll merge(vector<ll> &arr, vector<ll> &tempArray ,int l, int mid, int r){
    int i = l, j = mid, idx = l;
    ll countInversions = 0;
    while((i <= mid-1)&&(j <= r)){
        if(arr[i] <= arr[j])tempArray[idx++] = arr[i++];
        else{
            tempArray[idx++] = arr[j++];
            countInversions += mid-i;
        }
    }
    while(i <= mid-1)tempArray[idx++] = arr[i++];      
    while(j <= r)tempArray[idx++] = arr[j++];
    for(i=l;i<=r;i++)arr[i] = tempArray[i];
    return countInversions;
}

ll mergeSort(vector<ll> &arr, vector<ll> &tempArray, int l, int r){
    ll countInversions = 0;
    if(l < r){
        int mid = l+(r-l)/2;
        countInversions += mergeSort(arr, tempArray, l, mid);
        countInversions += mergeSort(arr, tempArray, mid+1, r);
        countInversions += merge(arr, tempArray, l, mid+1 ,r);
    }
    // debug...
    // cout << " --> " << countInversions << " " << l << " " << r << endl;
    return countInversions;
}

void solve()
{
    int n;
    string s;
    cin >> n;
    vector<ll>arr(n),tempArray(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    getline(cin ,s);
    cout << mergeSort(arr, tempArray, 0, n-1) << endl;
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
    cin>>t;
    getline(cin,s);
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

