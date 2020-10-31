/******************************************************************************/

#include <iostream>
using namespace std;

int main() {
	int n=0,i=0;
	int a[n];
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int j=0,cur=0;
	for(i=1;i<n;i++)
	{
	    cur=a[i];
	    j=i-1;
	    while(a[j]>cur&&j>=0)
	    {
	        a[j+1]=a[j];
	        j--;
	    }
	    a[j+1]=cur;
	}
	for(i=0;i<n;i++)
	{cout<<a[i]<<" ";}
	return 0;
}
