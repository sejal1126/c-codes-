	/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

Time Complexity - o(n^2)
#include <iostream>

using namespace std;

int sumExists(int arr[], int n, int sum){
    
    
    //code here
    int target=0;
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            target=arr[i]+arr[j];
            if(target==sum)
            return 1;
        }
    }
    
    return 0;
    
}
int main()
{
 int n=0,target=0;
 cin>>n;
 cin>>target;
 int arr[n];
 int i=0,j=0;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 
cout<<sumExists(arr,n,target)<<endl;
    return 0;
}


Time complexity = o(nlogn)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int n, int sum){
    
    
     sort (arr,arr+n);
    int left=0,right=n-1;
    int target=0;
    while(left<right)
    {
        target=arr[left]+arr[right];
       if(target==sum)
       {
           return 1;
       }
       else if(target<sum)
       {left++;}
       else
       {right--;}
    }
    return 0;
    
}
int main()
{
 int n=0,target=0;
 cin>>n;
 cin>>target;
 int arr[n];
 int i=0,j=0;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 
cout<<sumExists(arr,n,target)<<endl;
    return 0;
}
