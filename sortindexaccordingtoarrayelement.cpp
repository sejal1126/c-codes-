#include <bits/stdc++.h>

using namespace std;
bool mycomp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second<p2.second;
}
int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;
    int i=0;
    for(i=0;i<(sizeof(arr)/sizeof(arr[0]);i++)
    {
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end(),mycom);
    for(i=0;i<v.size();i++)
    {arr[v[i].second]=i;
        
    }
    for(i=0;i<n;i++)
    {cout<<arr[i]<<" ";}
    cout<<endl;

    return 0;
}
