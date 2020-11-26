#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;

	while(t--)
	{
		int m=0,n=0,i=0;
		cin>>m>>n;
		int a[m],b[n];
		for(i=0;i<m;i++)
		{cin>>a[i];}
		sort(a,a+m);
		for(i=0;i<n;i++)
		{cin>>b[i];}
		sort(b,b+n);
		int c[m+n];
		merge(a,a+m,b,b+n,c);
		sort(c,c+n);
		
		int d=0;
		d =m+n;
		for(i=d-1;i>=0;i--)
		{cout<<c[i]<<" ";}cout<<endl;
	}
	return 0;
}
