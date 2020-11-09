#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int arr[26]={0};
        string s;
        cin>>s;
        long int k,x,count=0;
        cin>>k>>x;
        for(auto j=s.cbegin();j!=s.cend();j++)
        {
            arr[*j-'a']++;
            if(arr[*j-'a']>x)
            {
                arr[*j-'a']--;
                k--;
                continue;
            }
            if(k>=0)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        /*for(int j=0;j<26;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        */
        cout<<count<<endl;
    }
    return 0;
}