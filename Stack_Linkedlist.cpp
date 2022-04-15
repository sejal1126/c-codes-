#include<bits/stdc++.h>
#include <iostream>

using namespace std;
struct node{
    int data;
    struct node*next;
}*top;

void push(int num)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=num;
    temp->next=top;
    top=temp;
    
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty\n";
    }
    struct node*temp;
    temp=top;
    int num=top->data;
    top=top->next;
    free(temp);
    cout<<"Deleted Number \t=\t"<<num;
}
void display()
{
    struct node*q;
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }else
    {
    cout<<"Element in stack"<<endl;
    for(q=top;q!=NULL;q=q->next)
    {
        cout<<q->data<<" ";
    }}
}
int main()

{char c;
    
    do

{
cout<<"1..push"<<endl;
cout<<"2..pop"<<endl;
cout<<"3..display"<<endl;
cout<<"enter your choice : ";
int ch=0,num=0;
cin>>ch;
switch(ch)
{
    case 1:cout<<"1.push\n";
           cout<<"Enter the number \t=\t";cin>>num;
           push(num);
           break;
    case 2: cout<<"2.pop\n";
           pop();
           break;
    case 3: cout<<"display\n";
            display();
            break;
    default : cout<<"Wrong choice\n";
              exit(0);
              
}cout<<"\n\nDo you want to do again \t=\t";cin>>c;
}while(c=='y'||c=='Y');
    
    

 
}
