#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main() {
    int i=0,cnt=1;
string a;
    getline(cin,a);
        while(a[i]!='\0')
        {if(a[i]==' '||a[i]=='\n'||a[i]=='\t')
            {cnt++;}
            i++;
        }
        
    cout<<cnt<<endl;
    return 0;
 
}
