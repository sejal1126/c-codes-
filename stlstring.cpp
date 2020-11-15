
#include <bits/stdc++.h>

using namespace std;
void setdemo()
{set<int> s;
    s.insert(10);
    s.insert(-1);
    s.insert(-1);
    s.insert(12);
    s.insert(-16);
    s.erase(-1);
    for(auto x : s)
    {cout<<x<<" ";}
    cout<<endl;
    auto it = s.lower_bound(10);
    auto it2 = s.upper_bound(10);
    cout<<*it<<" "<<*it2<<endl;
    auto it3 = s.find(10);
    if(it3==s.end())
    {cout<<"element not found \n";}
    else
    {cout<<"elemnet found\n";
        cout<<*it3;
    }
    
    
}
void mapp()
{map<int,int> cnt;
string ch ="sejal rathore";
for(char x : ch)
{
    cnt[x]++;
}
cout<<cnt['r']<<endl;
    
}
/*void set()
{
  set<pair<int,int>>s;
s.insert({10,20});
s.insert({20,30});
s.insert({30,40});
s.insert({40,50});
s.insert({50,60});
int point =45;
auto it = s.upper_bound({point,INT_MAX});
if(it==s.begin())
{
    cout<<"elemnet does nto found\n";
}
it--;
pair<int,int> current =*it;
if(point>=current.first &&point<=current.second)
{
    cout<<"presnt in range\n";
    cout<<current.first<<" "<<current.second<<endl;
}
  
}*/
void stringconvert()
{string ch;
    int i=0;
    cin>>ch;
    for(i=0;i<ch.size();i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
        else
        {
            ch[i]=ch[i]+32;
        }
    }
    for(i=0;i<ch.size();i++)
    {cout<<ch[i];}
    
}void frequencyinsentence()
{
    int count[256]={0};
	string ch;
	int max=0;
	getline(cin,ch);
	int i=0;
	char result;
	for(i=0;ch[i]!='\0';i++)
	{
		count[ch[i]]++;
		if(max<=count[ch[i]])
		{
			max=count[ch[i]];
			result=ch[i];
		}
	}cout<<result<<" "<<max;
}
int main()
{cout<<"program to find frequency of the character";
    string ch = "pulikit is a dog!!!!!!!";
    int i=0;
    int freq[26];
    for(i=0;i<26;i++)
    {freq[i]=0;}
    for(i=0;i<ch.size();i++)
    {freq[ch[i]-'a']++;}
    int maxf=0;
    char ans = 'a';
     for(i=0;i<26;i++)
    {if(freq[i]>maxf)
        {maxf=freq[i];
            ans=i+'a';
        }
    }cout<<maxf<<" "<<ans;
    return 0;
}
