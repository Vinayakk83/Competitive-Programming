#include<iostream>
using namespace std;
int main()
{
	int n,m,t,i,s1=0,s2=0,x=0,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		s1+=n;s2+=m;
		if(s1>s2 && x<s1-s2)
		{
			x=s1-s2;y=1;
		}
		else if(s1<s2 && x<s2-s1)
		{
			x=s2-s1;y=2;
		}
	}
	cout<<y<<" "<<x;
	return 0;
}
