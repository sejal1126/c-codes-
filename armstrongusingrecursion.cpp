#include <iostream>

using namespace std;
int printNos(int n)
{if(n<10)
{
    return n*n*n;}
    else
    {return (n%10)*(n%10)*(n%10)+printNos(n/10);
}
}

int main()
{
    int n=0,m=0,d=0;
    cin>>n;
    m=n; 
    d = printNos(n);
    if(d==m)
    {cout<<"Armstrong number";}
    else
    {cout<<"Not an armstrong number";}
    
return 0;
}
