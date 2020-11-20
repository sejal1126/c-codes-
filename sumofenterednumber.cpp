#include <iostream>
using namespace std;
int printNos(int n)
{int sum=0;
if(n<10)
{
    return 1;
}
else {sum=sum+n%10;
    return sum+printNos(n/10);
}
}

int main()
{
    int n=0,m=0,d=0;
    cin>>n;
   
    cout<<"Sum of entered digit : "<<printNos(n);
   
    
    
return 0;
}
