#include <iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class derived;
class base{
   int money=10;
   friend void add(base,derived);
};

class derived
{
    int money=20;
    friend void add(base,derived);
};

 void add(base b,derived d)
{
    cout<<"Total Amount = "<<b.money+d.money;
}
int main()
{  base obj1;
   derived obj2;
   add(obj1,obj2);
    return 0;
}
