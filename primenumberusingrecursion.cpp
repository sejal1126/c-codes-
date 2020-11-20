#include <iostream>

using namespace std;
int printNos(int n,int i)
{
    if(i==1) return 1;
    else if(n%i==0) return 0;
    else return printNos(n,i-1);
}

int main()
{
    int n=0,m=0,d=0;
    cin>>n;
    cin>>m;
   d= printNos(n,m);
    if(d==0)
    {cout<<"Not prime number";}
    else
    {cout<<"Prime number";}
    
    
return 0;
}
