#include <iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class derived;
class base{
   int a=10,b=20;
   public:
   void show()
{
    cout<<a<<" "<<b<<"\n";
}
   friend class derived;
};

class derived
{
    public:
    void show(base obj1)
    {
        int add=obj1.a+obj1.b;
        cout<<"Derived = "<<add;
    }
    
};


int main()
{  base obj1;
   derived obj2;
   obj1.show();
   obj2.show(obj1);
    return 0;
}
