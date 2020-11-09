#include <iostream>
using namespace std;

int main() {
    unsigned long long int k,n,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>j>>k;
        if((j/k)%k==0)
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
