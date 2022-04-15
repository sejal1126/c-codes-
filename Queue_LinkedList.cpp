#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node*next;
}*front,*rear;

void push(int num)
{struct node* temp;
temp=(struct node*)malloc(sizeof(struct node*));
temp->data=num;
temp->next=NULL;
if(front==NULL)
{
    front=rear=temp;
}
rear->next=temp;
rear=rear->next;
    
}
void pop()
{
    if(front==NULL)
    {
      
     cout<<"Queue is empty"<<endl;
}

struct node*temp;
int num=0;
num=front->data;
temp=front;
front=front->next;
free(temp);

     cout<<"Deleted Element \t:\t"<<num;
}
void display()
{
    if(front ==NULL)
    {
        cout<<"Queue is empty";
    }
   
    cout<<"Element in Queue"<<endl;
    struct node*q;
    for(q=front;q!=NULL;q=q->next)
    {
        cout<<q->data<<" ";
    }
}



int main()
{int ch=0;
char c='y';
    cout<<"stack\n";
    cout<<"\n1..Push the element \t";
    cout<<"\n2..Pop the element \t";
    cout<<"\n3..show the elmenet\t";
    int num=0;
    do{
    cout<<"\n enter your choice \t:";
    cin>>ch;
    switch(ch)
    {
        case 1 : cout<<"push the element\n";
                 cout<<"Enter the number\t:\t";
                 cin>>num;
                    push(num);
                    break;
        case 2 : cout<<"pop the element\n"; 
                    pop();
                    break;
        case 3 : cout<<"show the list of element \n";
                    display();
                    break;
        default : cout<<"you have entered wrong choice \n";
    }cout<<"\nDo you want to do again \t:";cin>>c;}
    while(c=='y'||c=='Y');
    
    return 0;
}
