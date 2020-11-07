
#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*fact(n-1);
}
int sum(int n)
{
    if(n<10)
    {
        return n;
    }
    else
    return (n%10)+sum(n/10);
}
int power(int n,int e)
{
    if(e==1)
    {return n;}
    else
    {
        return n*power(n,e-1);
    }
}
int number(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    cout<<n;
    return number(n-1);
}
int numbersym(int n)
{
    if(n==1)
    {
        cout<<"1";
        return 0;
        
        
    }
    else
   {numbersym(n-1);
    cout<<n;
    return numbersym(n-1);}
}
int main()
{int ch=0;
int n=0,e=0;
cout<<"Recursion World \n";
cout<<"1..Factorial of number \n";
cout<<"2..Sum of Enter digit\n";
cout<<"3..Power of number\n";
cout<<"4..Print number\n";
cout<<"5..Print number in symmetry\n";

cout<<"enter your choice :";cin>>ch;
if(ch==1)
{
    cout<<"Factorial of number \n";
    cin>>n;
    cout<<fact(n);
}
else if(ch==2)
{cout<<"Sum of Enter digit\n";
    cin>>n;
    cout<<sum(n);
}
else if(ch==3)
{cout<<"Power of number\n";
    cin>>n;
    cin>>e;
    cout<<power(n,e);
}
else if(ch==4)
{
    cout<<"Print number\n";
    cin>>n;
    cout<<number(n);
}
else if(ch==5)
{
    cout<<"print symmetry\n";
    cin>>n;
    cout<<numbersym(n);
}

    return 0;
}
