#include <iostream>

using namespace std;
int kad(int a[],int n)
{
    int sum=0;
    int maxsum=0,i=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)
        {
            sum=0;
        }
        maxsum=max(maxsum,sum);
    }
    return maxsum;
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
    int nonwrap=0,wrap=0;
    nonwrap = kad(a,n);
    int maxnum=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        a[i]=-a[i];
    }
    wrap=sum+kad(a,n);
    int m=0;
    m = max(wrap,nonwrap);
    cout<<m<<endl;

    return 0;
}
