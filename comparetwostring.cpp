//THIS PROGRAM FIRST SORT THE STRING AND THEN IT WILL COMPARE TWO STRING 
#include <bits/stdc++.h>

using namespace std;
void sortstring(string &str)
{
	sort(str.begin(),str.end());
}
int main() {
	int t=0,flag=0;
	cin >> t;

	while(t--)
	{int flag=0;
		string ch1,ch2;
		int i=0;
		cin>>ch1;
		cin>>ch2;
		sortstring(ch1);
		sortstring(ch2);
		for(i=0;i<ch1.size();i++)
		{
			if(ch1[i]!=ch2[i])
			{
				flag=1;
				break;
			}
		}			
		if(flag==1)
		{cout<<"NO"<<endl;}
		else
		{cout<<"YES"<<endl;}
	}return 0;
}



