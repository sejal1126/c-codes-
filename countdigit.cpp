#include <iostream>

using namespace std;
int printNos(int n)
{if(n<10)
{
    return 1;}
    else
    {return 1+printNos(n/10);
}
}

int main()
{
    int n=0,m=0,d=0;
    cin>>n;
    m=n; 
    d = printNos(n);
    cout<<"No of digit in term : "<<d;
    
return 0;
}
