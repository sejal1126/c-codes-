#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool sorted(int p[],int n)
{int rev=0;
    if(n==1)
{
    return true;
}
else
{
    rev = sorted(p+1,n-1);
    return (p[0]<p[1]&&rev);
    
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
    cout<<sorted(a,n);

    return 0;
}
