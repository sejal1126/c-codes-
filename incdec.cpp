#include<bits/stdc++.h>
using namespace std;
int dec(int n)
{int rev=0;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
    cout<<n<<endl;
    return dec(n-1);
    
}
void inc(int n)
{
   if(n>0)
   {
        inc(n-1);
       cout<<n<<endl;
   }
}
int main()
{
    int n=0;
    cin>>n;
 cout<<"Decreasing sequence \n";   
    dec(n);
    cout<<"Increasing sequence \n";
    inc(n);

    return 0;
}
