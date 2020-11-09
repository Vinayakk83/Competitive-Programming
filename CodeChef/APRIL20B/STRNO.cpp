#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define modulo 1000000007

bool isPrime(ll n) 
{  
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    return true; 
}

ll primeFactors(ll n,ll k)  
{  
    ll count=0;  
    while (n % 2 == 0)  
    {  
        count+=1;  
        n = n/2;  
    }
    if(count>=k)
    {
        return count;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {    
        while (n % i == 0)  
        {  
            count+=1;  
            n = n/i;  
        }
        if(count>=k)
        {
            return count;
        }  
    }    
    if (n > 2)  
        count+=1;
    return count;  
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        if(k==1)
        {
            if(x>1)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        else if(k==2)
        {
            if(isPrime(x))
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        else if(k>2 && k<30)
        {
            if (isPrime(x))
            {
                cout<<"0"<<endl;
            }
            else
            {
                if(primeFactors(x,k)>=k)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"0"<<endl;
                }
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}