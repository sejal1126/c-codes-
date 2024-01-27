Sort 0,1,2
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
    {
        // code here
        int left=0;
        int mid=0;
        int right=n-1;
        while(mid<=right)
        {
            if(arr[mid]==0)
            {
                swap(arr[left++],arr[mid++]);
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid],arr[right--]);
            }
        }
    }
int main()
{
 int n=0,target=0;
 cin>>n;

 int arr[n];
 
 int i=0,j=0;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 
sort012(arr,n);
 for(i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
    return 0;
}
