#include <bits/stdc++.h>

using namespace std;
string upup(string ch)
{int i=0;
    for(i=0;i<ch.size();i++)
    {
        if(i==0)
        {
            ch[i]=toupper(ch[i]);
        }
        else if(ch[i-1]==' ')
        {
            ch[i]=toupper(ch[i]);
        }
    }return ch;
}
int main()
{
    string ch;
    getline(cin,ch);
    int i=0;
    cout<<upup(ch)<<endl;
    return 0;
}
