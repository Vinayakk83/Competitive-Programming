#include <iostream>
using namespace std;

int main() {
	int T,j,count;
	long int num;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>num;
	    count=0;
	    while(num!=0)
	    {
	        j=num%10;
	        if(j==4)
	        {
	           count++;
	        }
	        num=num/10;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
