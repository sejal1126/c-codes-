
#include <iostream>

using namespace std;
#define MAX 1000
int arr[MAX];
int front =-1;
int rear = -1;

void isempty()
{
    if(front==-1 && rear ==-1)
    {
        cout<<"Queue is Empty\n";
    }
    else
    {
        cout<<"Queue is Full\n";
    }
}
void isfull()
{
    if(rear==MAX-1)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        cout<<"Queue is Empty"<<endl;
    }
}



void enque()
{
    if(rear==MAX-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else if(front ==-1)
    {
        front =0;
        
        
    }
    int num=0;
    cout<<"Enter the number to be Inserted : ";cin>>num;
    
    rear++;
        arr[rear]=num;
}
void  deque()
{
    if(front ==-1 && rear==-1)
{
    cout<<"Queue is Empty\n";
}
     else if(front ==rear)
    {
        front=rear =-1;
        
    }
    else
    {cout<<"Popped Element : "<<arr[front];
    front++;
        cout<<"\n";
        
    }
}
void showfront()
{
    if(front ==-1 && rear==-1)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"\n Element at front : "<<arr[front];
        cout<<"\n";
    }
}
void disp()
{ 
    if(front==-1)
{
    cout<<"Queue is empty\n";
}
else
{cout<<"Element in Queue :";
for(int i=front;i<=rear;i++)
{
    cout<<arr[i]<<" ";
}
    cout<<endl;
}
}
int main()
{char a;
    do{
    cout<<"Program to make Stack\n";
    cout<<"1..Push\n";
    cout<<"2..pop\n";
    cout<<"3..Display\n";
    cout<<"4..Isempty\n";
    cout<<"5..Isfull \n";
    cout<<"6..Wrong Choice\n";
    cout<<"Enter Your Choice : ";
    int ch=0,num=0;
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"Push \n";
               
                enque();
                break;
    
        case 2: cout<<"Pop \n";
                deque();
               
                break;
        case 3: cout<<"Display\n";
                disp();
                break;
        case 4: cout<<"Isempty\n";
                 isempty();
                 break;
        case 5: cout<<"Isfull\n";
                 isfull();
                 break;
        case 6: cout<<"Peek Element\n";
                showfront();
                break;
        default :cout<<"Wrong Choice\n";

 }
         cout<<"Do you want to do again :  ";cin>>a;
    }while(a=='Y'||a=='y');

    return 0;
}
