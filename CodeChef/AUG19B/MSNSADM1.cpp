#include <iostream>
using namespace std;

int main() {
	int i,k;
	cin>>i;
	for(k=0;k<i;k++)
	{
	    int j;
	    int m,largest;
	    cin>>j;
        int a[j],b[j];
	    for(m=0;m<j;m++)
	    {
	        cin>>a[m];
	        a[m]*=20;
	    }
	    for(m=0;m<j;m++)
	    {
	        cin>>b[m];
	        b[m]*=10;
	    }
	    for(m=0;m<j;m++)
	    {
	        a[m]=a[m]-b[m];
	        if(a[m]<=0)
	        a[m]=0;
	    }
	    largest=a[0];
	    for(m=1;m<j;m++)
	    {
	        if(largest<a[m])
	        {
	            largest=a[m];
	        }
	    }
	    cout<<largest<<endl;
	}
	
	return 0;
}