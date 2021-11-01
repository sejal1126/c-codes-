#include <iostream>

using namespace std;
void mergesort(int a[],int l,int mid, int r)
{
   int b[(r-l)+1];
   int i=l;
   int j=mid+1;
   int k=0;
   
   while(i<=mid && j<=r)
   {
       if(a[i]<a[j])
       {
           b[k]=a[i];
           i++;
       }
       else
       {
           b[k]=a[j];
           j++;
       }k++;
   }
  
       while(j<=r)
       {
           b[k]=a[j];
          
           j++;
           k++;
       }
   
       while(i<=mid)
       {
           b[k]=a[i];
          
           i++;
            k++;
       }
    
    for(int item:b)
         {
             a[l]=item;
             l++;
         }
    
}
void merge(int a[],int l,int r)
{
    int mid=0;
    if(l<r)
    {
        mid= l+ (r-l)/2;
        merge(a,l,mid);
        merge(a,mid+1,r);
        mergesort(a,l,mid,r);
       
    }
}

int main()
{
    int n=0;
    cin>>n;
    int a[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge(a,0,n);
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}
