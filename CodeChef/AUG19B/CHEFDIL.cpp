#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int n,flag;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        flag=0;
        int s;
        s=a.length();
        for(int j=0;j<s;j++)
        {
            if(a[j]=='1')
            {
                flag++;
            }
        }
        if(flag%2==1)
        {
        	cout<<"WIN"<<endl;
        }
        else
        {
        	cout<<"LOSE"<<endl;
        }
    }
	return 0;
}

