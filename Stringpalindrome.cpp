#include <iostream>

using namespace std;
string pal(char ch)
{

}
int main() {
	string ch;
	int flag=0;
	cin>>ch;
	int i=0;
	for(i=0;i<ch.size();i++)
	{
		if(ch[i]!=ch[ch.size()-1-i])
		{flag=1;
		break;
			
		}
		
	}		
	
	if(flag==1)
	{cout<<"NO"<<endl;}
	else
	{cout<<"YES"<<endl;}
}

