#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
long int binarySearch(long int arr[], long int l, long int r, long int x) 
{ 
    if (r >= l) { 
        long int mid = int (l + (r - l) / 2); 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    }
    return -1; 
}
int main()
{
    long int t,s;
    scanf("%ld %ld",&t,&s);
    for(long int i=0;i<t;i++)
    {
        long int n;
        scanf("%ld",&n);
        long int arr1[n],arr2[n];
        for(long int j=0;j<n;j++)
        {
            scanf("%ld",&arr1[j]);
        }
        for(long int j=0;j<n;j++)
        {
            scanf("%ld",&arr2[j]);
        }
        if(s==1)
        {
            int flag1,flag=0;
            sort(arr1,arr1+n);
            sort(arr2,arr2+n);
            for(long int j=0;j<n;j++)
            {
                if(arr1[j]>=arr2[j])
                {
                    printf("NO\n");
                    flag=1;
                    break;
                }
                else
                {
                    if(j<n-1 && arr1[j]!=arr1[j+1])
                    {
                        flag1=0;
                        if(binarySearch(arr2, 0, j, arr1[j+1])!=-1 || binarySearch(arr1, 0, j, arr1[j+1])!=-1)
                        {
                            flag1=1;
                            if(arr1[j+1]>=arr2[j+1])
                            {
                                flag=1;
                                printf("NO\n");
                                break;
                            }
                        }
                        if(flag1==0)
                        {
                            flag=1;
                            printf("NO\n");
                            break;
                        }
                    }
                    
                }
            }
            if(flag==0)
            {
                printf("YES\n");
            }
        }
        else
        {
            long int m,flag=0;
            if(n%2==0)
            {
                m=int(n/2);
            }
            else
            {
                m=int(n/2)+1;
            }
            unordered_map<long int, size_t> count1;
            unordered_map<long int, size_t> count2;
            for (int j=0; j<n; j++)        
            {
                count1[arr1[j]]++;
                count2[arr2[j]]++;
            }
            /*for(auto j :count1)
            {
                cout<<j.first<<" "<<j.second<<" ";
            }
            cout<<endl;
            for(auto j :count2)
            {
                cout<<j.first<<" "<<j.second<<" ";
            }
            cout<<endl;
            */
            if(n>1)
            {
                for (auto j : count1)
                {
                    for(auto k : count2)
                    {
                        if(j.first==k.first)
                        {
                            if(n%2==0)
                            {
                                if(j.second>m)
                                {
                                    printf("NO\n");
                                    flag=1;
                                }
                                else if(j.second==m)
                                {
                                    if(k.second>m)
                                    {
                                        printf("NO\n");
                                        flag=1;
                                    }
                                }
                            }
                            else
                            {
                                if(j.second>m)
                                {
                                    printf("NO\n");
                                    flag=1;
                                }
                                else if(j.second==m)
                                {
                                    if(k.second>=m)
                                    {
                                        printf("NO\n");
                                        flag=1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if(arr1[0]>=arr2[0])
                {
                    printf("NO\n");
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
