#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	while(t--)
	{stack<int> s;
	vector<int> v;
	    int n=0,i=0;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {cin>>arr[i];}
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
	            {v.push_back(s.top());}
	        }
	        s.push(arr[i]);
	    }
	    for(i=0;i<v.size();i++)
	    {cout<<v[i]<<" ";}
	    cout<<endl;
	   
	}
	return 0;
}
