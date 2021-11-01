#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void binarysearch(vector<int> &v,int x)
{
    int a=0;
    int b=v.size()-1;
    int k;
    sort(v.begin(),v.end());
    while(a<b)
    {
        k=(a+b)/2;
        if(v[k]<x) a=k+1;
        else b=k;
    }
    if(v[k]==x)
        cout<<"element found"<<endl;
    else cout<<"element not found"<<endl;
}
int main()
{
    vector <int> v;
    int n;
    int x;
    cout<<"Enter the elements of the array: "<<endl;
    while(1)
    {
       cin>>n;
       if(n==-1)
        break;
       v.push_back(n);
    }
    cout<<"Enter the value of searched element: "<<endl;
    cin>>x;
    binarysearch(v,x);
}
