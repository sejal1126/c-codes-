/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
  virtual  void show()
    {
        cout<<"Base class\n";
    }
};

class derived:public base
{
    public:
    void show()
    {
        cout<<"Derived class\n";
    }
};

int main()
{
    base *ptr;
    base a;
    derived d;
    ptr=&a;
    ptr->show();
    ptr=&d;
      ptr->show();
    return 0;
}
