#include <iostream>

using namespace std;
int printNos(int n)
{
if(n==1)
{
    return 1;
}
else return n*printNos(n-1);
    
}

int main()
{
    int n=0,m=0,d=0;
    cin>>n;
   
    cout<<printNos(n);
   
    
    
return 0;
}
