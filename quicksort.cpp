#include <bits/stdc++.h>

using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=0;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r)
{
    int p1=arr[r];
    int i=l-1;
    int j=0;
    for( j=l;j<r;j++)
    {
        if(arr[j]<p1)
        {
            i++;
            swap(arr,i,j);
        }
        
    }
    swap(arr,i+1,j);
    return i+1;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main()
{
    int n=0;
    cin>>n;
    int i=0;
    int a[n];
    for(i=0;i<n;i++)
    {cin>>a[i];}
quicksort(a,0,n-1);
cout<<"In ascending order\n";
for(i=0;i<n;i++)
{cout<<a[i]<<" ";}
cout<<"\nin descending order\n";
sort(a,a+n,greater<int>());
for(i=0;i<n;i++)
{cout<<a[i]<<" ";}
    return 0;
}
