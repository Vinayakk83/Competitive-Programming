#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,input;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>t;
        vector<long long>a;
        vector<long long>b;
        vector<long long>c;
        c.assign(t,0);
        for(int i=0;i<t;i++)
        {
        	cin>>input;
            a.push_back(input);
        }
        for(int i=0;i<t;i++)
        {
        	cin>>input;
            b.push_back(input);
        }
        int flag=0;
        for(int i=0;i<t;i++)
        {
            if(a[i]>=100000)
            {flag++;continue;}
            int m,h;
            m=i+a[i];
            h=i-a[i];
            if(m>=t)
            {
            	m=t-1;
            }
            if(h<=0)
            {
                h=0;
            }
            for(int k=h;k<=m;k++)
            {
                c[k]=c[k]+1;
            }
        }
        for(int i=0;i<t;i++)
        c[i]=c[i]+flag;
        sort(b.begin(), b.end()); 
        sort(c.begin(), c.end());
        if(c!=b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
	return 0;
}
