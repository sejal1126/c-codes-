/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int i=0,n=0;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int min1=INT_MAX;
    int min2=INT_MAX;
    vector<int>v;
    for(i=0;i<n;i++)
{
    if(arr[i]<min1)
    {   min2=min1;
        min1=arr[i];
    }
    
    else if(arr[i]>min1 && arr[i]<min2)
    {
        min2=arr[i];
    }
    
}
v.push_back(min1);
v.push_back(min2);
for(auto i : v)
{cout<<i<<" ";}
    return 0;
}
