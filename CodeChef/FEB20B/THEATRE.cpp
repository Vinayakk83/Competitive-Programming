#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum3=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char ch;
        int n,m,sum,sum1=0,l,p=0;
        cin>>n;
        int arr1[4][4]={0},arr2[4]={100,75,50,25},arr3[24]={0};
        for(int j=0;j<n;j++)
        {
            cin>>ch>>m;
            arr1[ch-'A'][(m%12)/3]++;
        }
        int arr[24][4]={
            {arr1[0][0],arr1[1][1],arr1[2][2],arr1[3][3]},
            {arr1[0][0],arr1[1][1],arr1[2][3],arr1[3][2]},
            {arr1[0][0],arr1[1][2],arr1[2][1],arr1[3][3]},
            {arr1[0][0],arr1[1][2],arr1[2][3],arr1[3][1]},
            {arr1[0][0],arr1[1][3],arr1[2][1],arr1[3][2]},
            {arr1[0][0],arr1[1][3],arr1[2][2],arr1[3][1]},
            {arr1[0][1],arr1[1][2],arr1[2][3],arr1[3][0]},
            {arr1[0][1],arr1[1][2],arr1[2][0],arr1[3][3]},
            {arr1[0][1],arr1[1][3],arr1[2][2],arr1[3][0]},
            {arr1[0][1],arr1[1][3],arr1[2][0],arr1[3][2]},
            {arr1[0][1],arr1[1][0],arr1[2][2],arr1[3][3]},
            {arr1[0][1],arr1[1][0],arr1[2][3],arr1[3][2]},
            {arr1[0][2],arr1[1][3],arr1[2][0],arr1[3][1]},
            {arr1[0][2],arr1[1][3],arr1[2][1],arr1[3][0]},
            {arr1[0][2],arr1[1][0],arr1[2][3],arr1[3][1]},
            {arr1[0][2],arr1[1][0],arr1[2][1],arr1[3][3]},
            {arr1[0][2],arr1[1][1],arr1[2][3],arr1[3][0]},
            {arr1[0][2],arr1[1][1],arr1[2][0],arr1[3][3]},
            {arr1[0][3],arr1[1][0],arr1[2][1],arr1[3][2]},
            {arr1[0][3],arr1[1][0],arr1[2][2],arr1[3][1]},
            {arr1[0][3],arr1[1][1],arr1[2][0],arr1[3][2]},
            {arr1[0][3],arr1[1][1],arr1[2][2],arr1[3][0]},
            {arr1[0][3],arr1[1][2],arr1[2][0],arr1[3][1]},
            {arr1[0][3],arr1[1][2],arr1[2][1],arr1[3][0]}    };
        for(int j=0;j<24;j++)
        {
            sum=0;
            for(int k=0;k<4;k++)
            {
                sum+=arr[j][k];
            }
            if(sum>=sum1)
            {
                arr3[p]=j;
                p++;
            }
        }
        int arr4[p]={0};
        for(int j=0;j<p;j++)
        {
            sort(arr[arr3[j]],arr[arr3[j]]+4,greater<int>());
            /*for(int k=0;k<4;k++)
            {
                cout<<arr[arr3[j]][k]<<" ";
            }
            cout<<endl;
            */sum=0;
            for(int k=0;k<4;k++)
            {
                if(arr[arr3[j]][k]>0)
                    sum+=arr[arr3[j]][k]*arr2[k];
                else
                    sum-=100;
            }
            arr4[j]=sum;
        }
        /*for(int j=0;j<p;j++)
        {
            cout<<arr4[j]<<" ";
        }
        cout<<endl;
        */sort(arr4,arr4+p,greater<int>());
        cout<<arr4[0]<<endl;
        sum3+=arr4[0];
    }
    cout<<sum3<<endl;
    return 0;
}