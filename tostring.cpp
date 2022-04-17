
#include <iostream>

using namespace std;
void swap(char *a,char *b)
{
    char *temp;
    temp=a;
    a=b;
    b=temp;
}
void to__string(int num)
{string result;
    while(num>0)
    {
        result+=char((num%10)+48);
        num=num/10;
    }
    int i=0;
    for(i=result.length();i>=0;i--)
    
    {cout<<result[i];}
}
int main()
{
   int num=0;
   cin>>num;
   to__string(num);
    return 0;
}
