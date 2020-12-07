#include <bits/stdc++.h>

using namespace std;
void greatertoright(int arr[],int n)
{int i=0;
    stack<int> s;
    vector<int> v;
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0&&arr[i]<s.top())
        {
            v.push_back(s.top());
        }
        else if(s.size()>0&&arr[i]>s.top())
        {
            while(s.size()>0&&arr[i]>s.top())
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {v.push_back(s.top());}
            
        }
        s.push(arr[i]);
    }reverse(v.begin(),v.end());
    for(auto x:v)
    {
     cout<<x<<" ";   
    }cout<<endl;
    
}
void greatertoleft(int arr[],int n)
{
    int i=0;
    vector<int> v;
    stack<int>s;
    for(i=0;i<n;i++)
    {
        if(s.size()==0)
        {v.push_back(-1);}
        else if(s.size()>0&&arr[i]<s.top())
        {v.push_back(s.top());}
        else if(s.size()>0&&arr[i]>s.top())
        {
            while(s.size()>0&&arr[i]>s.top())
            {s.pop();}
            if(s.size()==0)
            {v.push_back(-1);}
            else
            {v.push_back(s.top());}
        }s.push(arr[i]);
    }
    for(auto x:v)
    {cout<<x<<" ";}
    cout<<endl;
}
void smallertoleft(int arr[],int n)
{
    int i=0;
    vector<int> v;
    stack<int> s;
    for(i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0&&arr[i]>s.top())
        {
            v.push_back(s.top());
        }
        else if(s.size()>0&&arr[i]<s.top())
        {
            while(s.size()>0&&arr[i]<s.top())
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            
        }s.push(arr[i]);
        
    }for(auto x: v)
        {cout<<x<<" ";}cout<<endl;
    
}
void smallertoright(int arr[],int n)
{
     int i=0;
    vector<int> v;
    stack<int> s;
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0&&arr[i]>s.top())
        {
            v.push_back(s.top());
        }
        else if(s.size()>0&&arr[i]<s.top())
        {
            while(s.size()>0&&arr[i]<s.top())
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            
        }s.push(arr[i]);
        
    }reverse(v.begin(),v.end());
    for(auto x: v)
        {cout<<x<<" ";}cout<<endl;
    
}
int main()
{
   int n=0,ch=0;
   cin>>n;
   int arr[n];
   int i=0;
   for(i=0;i<n;i++)
   {cin>>arr[i];}
   cout<<"\nMENU DRIVEN ON STACK\n";
   cout<<"1.Next greater to right\n";
   cout<<"2.Next greater to left\n";
   cout<<"3.Next smaller to left\n";
   cout<<"4.Next smaller to right\n";
   cout<<"enter your choice \t : ";cin>>ch;
   if(ch==1)
   {greatertoright(arr,n);}
   else if(ch==2)
   {greatertoleft(arr,n);}
   else if(ch==3)
   {
       smallertoleft(arr,n);
   }
   else if(ch==4)
   {
       smallertoright(arr,n);
   }
   
    return 0;
}
