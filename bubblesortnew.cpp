
#include <iostream>

using namespace std;
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
void bubble(int a[],int n)
{
    int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
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
   bubble(a,n);
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}
