#include <iostream>

using namespace std;
#define size 20
int stack[size];
int val=0;

int top=-1;
void push()
{
    
    if(top==size-1)
    {
        cout<<"stack is full!!";
    }
    else
    {cout<<"\nenter the number to push it into stack\t:\t";
        cin>>val;
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {cout<<"stack is empty!!";}
    else
    {
        top=top-1;
    }
    
}
void show()
{
    int i=0;
    for(i=top;i>=0;i--)
    {
        cout<<stack[i];
    }
    if(top==-1)
    {
        cout<<"\nstack is empty nothing to show\t\n";
    }
}

int main()
{int ch=0;
char c='y';
    cout<<"stack\n";
    cout<<"\n1..Push the element \t";
    cout<<"\n2..Pop the element \t";
    cout<<"\n3..show the elmenet\t";
    do{
    cout<<"\n enter your choice \t:";
    cin>>ch;
    switch(ch)
    {
        case 1 : cout<<"push the element\n";
                    push();
                    break;
        case 2 : cout<<"pop the element\n"; 
                    pop();
                    break;
        case 3 : cout<<"show the list of element \n";
                    show();
                    break;
        default : cout<<"you have entered wrong choice \n";
    }cout<<"\nDo you want to do again \t:";cin>>c;}
    while(c=='y'||c=='Y');
    
    return 0;
}
