
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=0;
    int n=0;
    int arr[]={6,8,0,1,3};
    vector<int> v;
    stack<int>s;
    n=(sizeof(arr)/sizeof(arr[0]));
    for(i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if((s.size()>0)&&(arr[i]<s.top()))
        {
            v.push_back(s.top());
        }
        else if((s.size()>0)&&(arr[i]>s.top()))
        {
            while((s.size()>0)&&(arr[i]>s.top()))
            {s.pop();}
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
            
        }
       s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(auto x: v)
    {
        cout<<x<<" ";
    }cout<<endl;

    return 0;
}
