
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int big(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
   int n=0,i=0,j=0,k=0,num=0;
   cin>>n>>num;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int length =0,sum=0;
   for(i=0;i<n;i++)
   {
       for(j=i;j<n;j++)
       {   sum=0;
           for(k=i;k<=j;k++)
           {  
               sum+=arr[k];
               if(sum==num)
               {
                   length=big(length,j-i);
               }
               
               
           }
       }
   }

cout<<"Longest Subarray Having Sum :"<<num<<"is :"<<length;
    return 0;
}
