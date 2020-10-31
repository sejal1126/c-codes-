/******************************************************************************/

#include <iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
    int s=0,e=0,mid=0;
	s=0,e=n;
	while(s<=n)
	{
	    mid=(s+e)/2;
	    if(a[mid]==key)
	    {
	        return mid;
	    }
	    else if(a[mid]>key)
	    {
	        e=mid-1;
	    }
	    else if(a[mid]<key)
	    {
	        s=mid+1;
	    }
	}return -1;
}
    

int main() {
	int n=0,i=0;
	int a[n];
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int key=0;
	cin>>key;
	cout<<"element found at position: "<<binarysearch(a,n,key);
	
	return 0;
}
