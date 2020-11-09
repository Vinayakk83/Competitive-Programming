#include <stdio.h>
//using namespace std;
typedef long long int ll;
//typedef unsigned long long int ull;
//#define modulo 1000000007

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(n%2==0)
        {
            printf("%lld\n",n/2);
            for(ll i=1;i<n;i+=2)
            {
                printf("2 %lld %lld\n",i,i+1);
            }
        }
        else
        {
            if(n<3)
            {
                printf("1\n1 1\n");
            }
            else
            {
                printf("%lld\n3 1 2 3\n",n/2);
                for(ll i=4;i<n;i+=2)
                {
                    printf("2 %lld %lld\n",i,i+1);
                }
            }
        }
    }
    return 0;
}