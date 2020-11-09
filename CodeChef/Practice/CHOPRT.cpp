#include <iostream>
using namespace std;

int main() {
	int T;
	long int A,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	   cin>>A>>B;
	   if(A==B)
	   cout<<"="<<"\n";
	   else if(A<B)
	   cout<<"<"<<"\n";
	   else if(A>B)
	   cout<<">"<<"\n";
	}
	return 0;
}
