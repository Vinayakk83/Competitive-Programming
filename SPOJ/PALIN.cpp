#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007
#define PI 3.14159265
#define swift ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e6+1;

void solve()
{
    string num;
    cin >> num;
    int length = num.size();
    bool flag = false;
    int idx = -1, i = length/2-1;
    while(i >= 0 && num[i] == num[length-i-1]) {
        if(!flag && num[i] < '9') idx = i, flag = true;
        i--;
    }
    // debug...
    // cout << "-->" << idx << " " << i << endl;
    if(length&1) {
        if(i+1) {
            if(num[i] > num[length-i-1]) idx = i;
            else {
                if(num[length/2] < '9') num[length/2]++, idx = i;
                else {
                    if(idx == -1) num[i]++, idx = i;
                    else num[idx]++;
                    num[length/2] = '0';
                    for(int k = idx+1;k < length/2;k++) num[length-k-1] = num[k] = '0';
                }
            }
            for(int k = 0;k < idx+1;k++) num[length-k-1] = num[k];
            cout << num << endl;
        }
        else {
            string palindrome;
            if(num[length/2] < '9') {
                num[length/2]++;
                for(int k = 0;k < length/2;k++) num[length-k-1] = num[k];
                palindrome = num;
            }
            else {
                if(idx == -1) {
                    palindrome = "1";
                    for(int k = 1;k < length;k++) palindrome += '0';
                    palindrome += "1";
                }
                else {
                	num[idx]++, num[length-idx-1]++;
                	for(int k = idx+1;k < length-idx-1;k++) num[k] = '0';
                	num[length/2] = '0';
                	palindrome = num;
                }
            }
            cout << palindrome << endl;
        }
    }
    else { 
        if(i+1) {
            if(num[i] > num[length-i-1]) idx = i;
            else {
                if(idx == -1) num[i]++, idx = i;
                else num[idx]++;
                for(int k = idx+1;k < length/2;k++) num[length-k-1] = num[k] = '0';
            }
            for(int k = 0;k < idx+1;k++) num[length-k-1] = num[k];
            cout << num << endl;
        }
        else {
            string palindrome;
            if(idx == -1) {
                palindrome = "1";
                for(int k = 1;k < length;k++) palindrome += '0';
                palindrome += "1";
            }
            else {
                num[idx]++, num[length-idx-1]++;
            	for(int k = idx+1;k < length-idx-1;k++) num[k] = '0';
            	palindrome = num;
            }
            cout << palindrome << endl;
        }
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
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

