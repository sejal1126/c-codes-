#includde <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,i=0;
        cin>>n;
        int fact=1;
        for(i=1;i<n;i++)
        {
            fact=fact*i;
            
        }int d=0,cnt=0;
        while(fact>0)
        {d=fact%10;
         if(d==0)
         {cnt++;}
         fact=fact/10;
            
        }cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
